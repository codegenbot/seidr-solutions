Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if (i + 2) % 3 == 0:
            group = s[i:i+3]
        else:
            group = s[i] + s[(i-1)%3:(i+1)]
        result += group[1] + group[0]
        i += 3
    return result