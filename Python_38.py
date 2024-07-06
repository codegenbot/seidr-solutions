Here is the completed code:

def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        group = s[:3]
        result += group[1] + (group[0] if group[2] == group[0] else "")
        s = s[3:]
    if s:
        if len(s) == 1:
            result += s
        elif len(s) == 2:
            result += s[0] + (s[1] if s[0] == s[1] else "")