def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i + 3]:
            group = s[i : i + 3]
            j = 1
            while j < len(group):
                result += group[j]
                j += 1
            result += group[0]
            i += 3
        else:
            result += s[i]
            i += 1
    return result