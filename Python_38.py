Here is the completed code:

def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i+3]:
            group = s[i:i+3]
            j = 1
            while len(group) > 3:
                group = group[1:] + group[0]
                j += 1
            result.extend([group[:1], group[1:]] * (j-1))
        else:
            result.append(s[i:i+3])
        i += 3
    return "".join(result)