def decode_cyclic(s: str):
    s = input()
    result = ""
    while len(s):
        if len(s) >= 3:
            group = s[:3]
            if len(group) > 1 and group[0] == group[-1]:
                result += group[1]
                s = s[3:]
            else:
                for i in range(len(group)):
                    if group[i] != group[(i+1)%3]:
                        result += group[i]
                        break
                s = s[3:]
        else:
            result += s[0]
            s = s[1:]
    return result