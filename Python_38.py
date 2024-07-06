def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if i % 3 == 0:
            if i + 2 >= len(s):
                group = s[i:]
            else:
                group = s[i : i + 3]
            result.append(group[-1] + group[:-1])
        else:
            result.append(s[i])
        i += 1
    return "".join(result)