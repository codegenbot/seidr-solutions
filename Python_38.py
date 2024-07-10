def encode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if char == "x":
            result.append(temp)
            temp = ""
        else:
            if len(temp) < 3:
                temp += char
            else:
                result.append(temp + char)
                temp = ""
    if temp:
        result.append(temp)
    return "".join(result).lstrip("x")


def decode_cyclic(s: str):
    groups = []
    for i in range(0, len(s), 3):
        group = s[i : i + 3] if i + 3 <= len(s) else s[i:]
        if len(group) == 1:
            group = "x" + group
        elif len(group) > 2:
            groups.append(group[1:] + group[0])
        else:
            groups.append(group)
    return "".join(groups[::-1])