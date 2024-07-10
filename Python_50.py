def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 97 - ord("a")) % 26) + ord("a")) if ch.isalpha() and ch.islower()
                    else ((ord(ch.upper()) - 65 - ord("A")) % 26) + ord("A") if ch.isalpha() and ch.isupper()
                    else ch for ch in s])