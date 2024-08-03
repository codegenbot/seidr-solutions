Here is the completed code:

def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i+3]:
            group = s[i:i+3]
            j = 1
            while j <= len(group) // 2:
                result.append(group[j])
                j += 1
        else:
            result.append(s[i])
        i += 1
    return "".join(result)