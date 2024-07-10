```
def encode_cyclic(s: str):
    groups = []
    for i in range(0, len(s), 3):
        group = s[i : i + 3] if i + 3 <= len(s) else s[i:]
        groups.append(group[1:] + group[0] if len(group) == 3 else group)
    return "".join(groups).lstrip('x')


def decode_cyclic(s: str):
    result = ""
    for char in s:
        if char == 'x':
            continue
        elif len(result) % 3 == 0 and result[-1] == 'x':
            result += char
        else:
            result += result[-1] + char
    return result