```Python
def decode_cyclic(s: str):
    result = ""
    while len(s) > 2:
        for i in range(0, len(s), 3):
            if i == len(s) - 3:
                result += s[i+1] + s[i] + s[i+2]
            else:
                result += s[i+1] + s[i] + s[i+2]
    return result + s