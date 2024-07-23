```
def decode_cyclic(s: str) -> str:
    result = []
    i = 0
    while i < len(s):
        group = s[i:i+3] if (i + 2) % 3 == 0 else s[i:j]
        j = i
        while j < len(s) and s[j] != s[i]:
            j += 1
        if len(group) > 1:
            group = group[1:] + group[0]
        elif result:
            return "".join([s[:i]] + result + [group])
        i += 3
    return "".join([s[:i]] + result + [group]) if result else group