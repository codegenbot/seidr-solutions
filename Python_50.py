def decode_shift(s):
    result = ""
    for ch in s:
        if 'a' <= ch <= 'z':
            shift = ord(ch) - ord('a')
            result += chr((shift - 5) % 26 + ord('a'))
        else:
            result += ch
    return result