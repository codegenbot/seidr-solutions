def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i] * 2 in s[i:]:
            repeat, rest = s[i].upper(), s[i + 1:]
            while repeat * (len(repeat) | (len(rest) & 1)) <= len(rest):
                result += repeat
                rest = rest[len(repeat):]
        else:
            group = ""
            for j in range(i, len(s)):
                if len(group) * 2 >= len(s) - j:
                    break
                group += s[j]
            i = j
            while len(group) % 3 != 0 or not set([group[0]] * (len(group) // 3)).issubset(set(group)):
                group = group[:len(group) - 1]
            result += decode_cyclic_group(group)
        i = i + 1 if i + 1 < len(s) else len(s)
    return result