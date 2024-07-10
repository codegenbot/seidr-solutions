def decode_shift(s: str):
    for ch in s:
        if not 'a' <= ch.lower() <= 'z':
            return "Error: Input string should contain only alphabets."
    result = ""
    for ch in s:
        if 'a' <= ch.lower() <= 'z':
            result += chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a"))
        else:
            result += ch
    return result.upper()