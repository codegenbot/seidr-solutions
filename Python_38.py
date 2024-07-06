```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i+3]:
            group_length = 3
        else:
            group_length = 1
        for j in range(group_length):
            result += s[i+j]
        i += group_length
    return result