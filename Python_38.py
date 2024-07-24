Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if (i + 3) <= len(s):
            group = s[i:i+3]
        else:
            group = s[i:]
        if len(group) == 3 and group[0] != group[2]:
            result += group[1] * 2
            i += 3
        elif len(group) < 3 or (len(group) == 3 and group[0] == group[2]):
            result += group
            i += len(group)
        else:
            if group[1] != group[0]:
                result += group[0]
            if i + 1 < len(s):
                result += s[i+1]
            i += 2