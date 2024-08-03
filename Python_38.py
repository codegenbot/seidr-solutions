def decode_cyclic(s: str):
    result = ""
    group = ""
    for char in s:
        if len(group) == 3:
            result += group[1]
            group = char
        else:
            group += char
    result += group
    return result + "".join([group[i] for i in range(2, -1, -1) if i % 3 != 0]) * ((len(s) + 2) // 3 * 3 - len(s))