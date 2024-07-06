```Python
def decode_shift(s: str):
    return "".join([chr((ord(ch) - 5 + ord("a")) % 26 + ord("a")) if ch.isalpha() and ch.islower() else 
                    chr((ord(ch.upper()) - 5 + ord("A")) % 26 + ord("A")) if ch.isalpha() and not ch.islower() 
                    else ch for ch in s])