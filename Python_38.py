```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i % 3 == 0:
            if i + 2 <= len(s):
                if s[i] == s[i + 1]:
                    result += s[i : i + 2]
                    i += 2
                else:
                    result += s[i:]
            else:
                result += s[i:]
        else:
            result += s[i]
        i += 1
    return result