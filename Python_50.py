```
def decode_shift(s: str):
    if not set(s).issubset('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ'):
        return 'Invalid input. Only alphabets are allowed.'
    result = ""
    for ch in s:
        if 'a' <= ch.lower() <= 'z':
            result += chr(((ord(ch.lower()) - 5 - ord("a")) % 26) + ord("a"))
        else:
            result += ch
    return result.upper()