def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 97 - ord("a")) % 26) + ord("a")) 
                    if ch.isalpha() and ch.islower()
                    else chr(((ord(ch) - 65 - ord("A")) % 26) + ord("A"))
                    for ch in s])