def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord('a')) % 26) + ord('a')) if ch.isalpha() and ch.islower()
                    else chr(((ord(ch) - 5 - ord('A')) % 26) + ord('A')) if ch.isalpha() and ch.isupper()
                    else ch for ch in s])