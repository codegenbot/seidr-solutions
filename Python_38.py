s = input()


def decode_cyclic(s: str):
    groups = []
    temp = ""
    for char in s:
        temp += char
        if len(temp) % 3 == 0:
            groups.append(temp)
            temp = ""
    return "".join(
        [
            group[1:] + group[0] if len(group) == 3 else group
            for group in [temp] + groups
        ]
    )


print(decode_cyclic(s))