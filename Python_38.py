def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        group_length = 3
        if i + 2 >= len(s):
            group_length = len(s) - i
        temp_group = s[i : i + group_length]
        result += temp_group[1:] + temp_group[0]
        i += group_length
    return result