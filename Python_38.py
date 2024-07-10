Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] == s[len(s) - i - 1]:
            result += s[i]
            i += 1
        else:
            group = s[i:i+3]
            if group[0] in [s[j] for j in range(len(s)-i-2)]:
                result += group[1:]
            else:
                result += group
            i += 3
    return result