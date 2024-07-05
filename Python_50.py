```Python
def decode_shift(s: str):
    if any(not ch.isalpha() or ch.isupper() for ch in s):
        return "Invalid input. Please provide only lowercase English alphabets."
    else:
        return "".join([chr(((ord(ch) - 97) % 26) + 97) for ch in s])