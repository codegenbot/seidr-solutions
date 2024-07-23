def decode_shift(s: str):
    result = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            result += chr((ord(ch) - ord('a') + 3) % 26 + ord('a'))
        else:
            result += ch
    return result