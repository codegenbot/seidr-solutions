```Python
def decode_shift(s: str):
    return "".join([chr(((ord(ch) - ord(c)) % 26) + ord(c))
                    if ch.isalpha()
                    else ch
                    for c in 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ' 
                    for ch in s])