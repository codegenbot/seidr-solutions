def decode_cyclic(s):
    result = ""
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i:i+3]
        else:
            group = s[i:]
        if len(group) == 3 and (group == 'abc' or group == 'bcd'):
            result += group
        elif len(group) > 1:
            result += group[2] + group[1] + group[0]
        else:
            result += group
        i += 3
    return result