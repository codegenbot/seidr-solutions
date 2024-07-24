def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.isalpha():
        ch = ch.lower()
        if ord(ch) < ord("n"):
            ch = chr(ord(ch) + 1)
        else:
            ch = chr(ord(ch) - 25)
        if ch >= 'a' and ch <= 'z':
            return chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a"))
        elif ch >= 'A' and ch <= 'Z':
            return chr(((ord(ch) - 5 - ord("A")) % 26) + ord("A")) 
        else:
            return ch
    else:
        return ch