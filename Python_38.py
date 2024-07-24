def decode_cyclic(s: str):
    result = ''
    for i, char in enumerate(s):
        if (i + 1) % 3 == 0:
            if len(result) > 0 and len(result[-1]) == 3:
                result[-1] = result[-1][1:] + result[-1][0]
            else:
                if result != '':
                    result += char
                else:
                    result = char
        else:
            if result != '':
                result += char
    return result