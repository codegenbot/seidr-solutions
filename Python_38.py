```
def decode_cyclic(s: str):
    result = ''
    while len(s) > 0:
        group = s[:3]
        if len(group) == 1:
            result += group
            break
        if len(group) < 3:
            last_char = result[-1]
            first_chars = group[1:] + group[0] if group[0] != last_char else group[:-1]
            result += first_chars + last_char
            s = ''
        else:
            result += group[1:] + group[0]
            s = s[3:]
    return result