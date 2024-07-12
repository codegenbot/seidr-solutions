def decode_shift(s: str):
    result = ""
    for ch in s:
        if ch.isalpha():
            shift = 5
            if ch.lower() < 'n':
                shift -= (26 - ord('n') + ord(ch.lower()))
            result += chr(((ord(ch) - shift - ord(ch.lower())) % 26) + ord('a'))
        else:
            result += ch
    return result