```
def encode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            result += s[i+1:i+3] + s[i]
        else:
            result += s[i:]
        i += 3

    return result

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            result += s[i] + s[i+1:i+2] + s[i+2]
        else:
            last_group = s[i:]
            for j in range(len(last_group)):
                if j % 3 == 0:
                    result += last_group[j]
                elif j % 3 == 1:
                    result += last_group[j]
                else:
                    result += last_group[0]
            break
        i += 3

    return result