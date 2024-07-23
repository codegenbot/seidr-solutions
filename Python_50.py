def decode_shift(s: str):
    result = ""
    for ch in s:
        if ord('a') <= ord(ch) <= ord('z'):
            result += chr(((ord(ch) - ord('a')) % 26) + ord('a'))
        elif ord('A') <= ord(ch) <= ord('Z'):
            result += chr(((ord(ch) - ord('A')) % 26) + ord('A'))
        else:
            result += ch
    return result