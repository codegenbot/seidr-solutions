def decode_shift(s: str):
    if not s.isalpha() or not s.islower():
        return "Input string should contain only lowercase alphabets."
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in s])