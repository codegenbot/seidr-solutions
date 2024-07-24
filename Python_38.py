def decode_cyclic(s: str):
    result = ""
    for i, char in enumerate(s):
        if (i + 1) % 3 == 0:
            result += char
            if (i + 1) // 3 * 3 == len(result):
                break
        elif i > 0 and (i + 1) % 3 == 2:
            result += char[1] if (i - 1) % 3 == 0 else char[0]
        else:
            result += char[2] if (i - 1) % 3 == 1 else char
    return result