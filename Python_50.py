```
def decode_shift(s: str):
    if s:
        return "".join([chr(((ord(ch) - 5 - ord('a')) % 26) + ord('a')) if 'a' <= ch <= 'z' else ch for ch in s])
    else:
        return ""