```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        group = s[i:i+3] if i+2 <= len(s) else s[i:]
        if len(group) == 3:
            first_two_chars = ''.join(sorted(group[:2]))
            last_char = group[2]
            if first_two_chars in group or (i+1 < len(s) and group[:2] + group[2] in s):
                result += last_char
            else:
                result += first_two_chars + last_char
        elif len(group) > 0:
            result += group
        i += 3
    return result