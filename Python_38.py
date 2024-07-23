```Python
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 1 < len(s) and s[i] == s[i+1]:
            count = 2
            while i + count <= len(s) and s[i] == s[i+count-1]:
                count += 1
            result += s[i] * count
            i += count
        else:
            if i < len(s):
                result += s[i]
            i += 1
    return result