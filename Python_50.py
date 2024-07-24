def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord('a')) % 26) + ord('a')) if 'a' <= ch <= 'z' 
                    else ((ord(ch) - 5 - ord('A')) % 26) + ord('A') if 'A' <= ch <= 'Z' 
                    else ch for ch in s])