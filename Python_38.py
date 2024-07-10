def encode_cyclic(s: str):
    if len(s) < 3:
        raise ValueError("String length should be at least 3")

    groups = []
    for i in range(0, len(s), 3):
        group = s[i : i + 3] if i + 3 <= len(s) else s[i:]
        groups.append(group[1:] + group[0] if len(group) == 3 else group)

    return "".join(groups).lstrip("x")


def decode_cyclic(s: str):
    result = []
    temp = ""
    for char in s:
        if char == "x":
            result.append(temp)
            temp = ""
        else:
            temp += char
    if temp:
        result.append(temp)
    return "".join(result[::-1])