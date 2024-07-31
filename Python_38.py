def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i + 2]:
            result += s[i]
            i += 3
        else:
            group = s[i : i + 1]
            for j in range(i + 1, len(s)):
                if (j + 1) % 3 != 0 or group[0] == s[j]:
                    group += s[j]
                    break
            result += group
            i = j
    return result