def decode_cyclic(s: str):
    result = ""
    if len(s) < 3:
        if len(s) == 1:
            result += s
        elif len(s) == 2:
            result += s[0] + s[1]
        else:
            return s
    while len(s) > 2:
        for i in range(0, len(s), 3):
            if i == len(s) - 1:
                result += s[i]
            else:
                if len(s[i+2]) == 1:
                    result += s[i]+s[i+2]+s[i+1]
                else:
                    result += s[i+1]+s[i]+s[i+2][0]+s[i+2][1:]
    return result + s