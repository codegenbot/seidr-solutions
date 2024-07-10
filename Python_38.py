def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i : i + 3]
        else:
            group = s[i:]
        result.append(group[1] + (group[0] if i >= 2 else ""))
        i += 3
    return "".join(result)