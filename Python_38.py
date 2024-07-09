s = input()


def decode_cyclic(s: str):
    result = ""
    for char in s:
        if not result or result[-1] != char:
            result += char
    return result