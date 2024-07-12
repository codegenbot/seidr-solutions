def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        print("Error: Input string must be a multiple of 3")
        return
    result = []
    i = 0
    while i < len(s):
        group = s[i:i+3]
        if len(group) == 2:
            result.append(group[1])
            i += 2
        else:
            result.extend([group[0], group[1]])
            i += 3
    return "".join(result)