def decode_shift(s: str):
    if not s.islower():
        return "Input should contain only lowercase alphabetic characters"
    return "".join([chr(((ord(ch) - 7 - ord("a")) % 26) + ord("a") for ch in s])