def decode_cyclic(s: str):
    result = ""
    group_index = 0
    for char in s:
        if group_index % 3 == 1 or len(s) - s.index(char) <= 2:
            result += char
        else:
            result = result[:-1] + char
        group_index += 1
    return result