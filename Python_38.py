def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            group = s[i : i + 3]
        else:
            group = s[i:]
        if len(group) == 2:
            last, first = group[0], group[1]
            result.append(last)
            for char in first + group[2:]:
                if i < len(s) - 1:
                    i += 1
                result.append(char)
        else:
            result.extend(group)
        i += len(group)
    return "".join(result)