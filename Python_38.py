def decode_cyclic(s: str):
    result = ""
    while s:
        for i in range(2, -1, -1):
            if len(s) >= 3:
                group = s[:3]
                s = s[3:]
            else:
                group = s
                s = ""
            if i == 0:
                result += group[-1].lower()
            elif i == 1:
                result += group[-2].lower()
            else:
                result += group[-3].upper()
    return result