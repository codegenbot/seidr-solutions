def decode_cyclic(s: str):
    result = []
    group_index = 0
    for char in s:
        if group_index < len(result) and len(result[group_index]) >= 3:
            result[group_index] += char
            if len(result[group_index]) == 3:
                group_index += 1
        else:
            if not result or group_index == 0:
                result.append(char)
            else:
                result[group_index - 1] += char
                if len(result[group_index - 1]) == 3:
                    group_index -= 1
    return "".join([group[1:] + group[0] for group in result])