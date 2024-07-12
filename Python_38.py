def decode_cyclic(s: str):
    result = []
    group = ""
    for char in s:
        if group == "..." or (len(group) == 3 and group[0] == char):
            result.append(char)
            group = ""
        else:
            group += char
    return "".join(result)