def encode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    if len(s) % 3 != 0:
        groups.append(s[-1])
    return "".join(
        [group[1:] + group[0] if len(group) == 3 else group for group in groups]
    )


def decode_cyclic(s: str):
    result = ""
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            result += temp[1] + temp[0]
            temp = ""
    if temp:
        result += temp
    return result