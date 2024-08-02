def decode_shift(s: str):
    if not s.isalpha() or not s.islower():
        return "Invalid input. Please provide a string of lowercase English letters."
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])