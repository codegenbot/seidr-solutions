def decode_cyclic(s: str):
    result = []
    temp_group = ""
    for char in s:
        temp_group += char
        if len(temp_group) % 3 == 0:
            if len(temp_group) > 3:
                last_char, *middle, first_char = (
                    temp_group[-1],
                    temp_group[1:-1],
                    temp_group[0],
                )
                result.extend([first_char] + middle[::-1] + [last_char])
            else:
                result.append(temp_group)
            temp_group = ""
    if temp_group:
        if len(temp_group) > 3:
            last_char, *middle, first_char = (
                temp_group[-1],
                temp_group[1:-1],
                temp_group[0],
            )
            result.extend([first_char] + middle[::-1] + [last_char])
        else:
            result.append(temp_group)
    return "".join(result)