def decode_cyclic(s: str):
    if not s:
        return ""

    result = [s[0]]
    for c in set(s[1:]):
        count = s.replace("".join(result), "").count(c)
        if count > 0:
            if count % 2 == 1:
                result.append(c)
            else:
                result.extend([c] * ((count // 2) + (count % 2)))
    return "".join(result + result[:-1])