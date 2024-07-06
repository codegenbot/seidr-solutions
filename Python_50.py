def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 97 - ord("a")) % 26) + ord("a")) if ch.isalpha() and ch.islower()
                    else (ch.lower().translate(str.maketrans("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz", "zyxwvutsrqponmlkjihgfedcbaZYXWVUTSRQPONMLKJIHGFEDCBA"))[ord(ch) - ord('a')] if ch.isalpha() and ch.islower() else ch for ch in s])