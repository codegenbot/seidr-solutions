def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i + 3]:
            group = s[i : i + 4]
            while len(result) % 3 != 0 or group[1:] != group[0]:
                result.append(group[1])
                group = group[1:]
            result.extend(group)
        else:
            if i < len(s):
                group = s[i : i + 3]
                while len(result) % 3 != 0 and group[1:] != group[0]:
                    result.append(group[1])
                    group = group[1:]
                result.extend(group)
        i += 3
    return "".join(result)