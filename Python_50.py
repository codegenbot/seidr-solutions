```Python
def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha() and ch.lower() == ch and 'a' <= ch <= 'z' else 
                    chr(((ord(ch) - 5 - ord("A")) % 26) + ord("A")) if ch.isalpha() and ch.upper() == ch and 'A' <= ch <= 'Z' else 
                    ch for ch in s])