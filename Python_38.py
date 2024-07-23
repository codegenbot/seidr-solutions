```
def decode_cyclic(s: str) -> str:
    result = []
    i = 0
    while i < len(s):
        if (i + 2) % 3 == 0:
            group = s[i:i+3]
        else:
            j = i
            while j < len(s) and s[j] != s[i]:
                j += 1
            group = s[i:j]
            result.append(s[j:])
            break
        if len(group) > 1:
            group = group[1:] + group[0]
        else:
            return s[:i]
        i += 3
    return "".join([s[:i]] + result + [group]) if result else group