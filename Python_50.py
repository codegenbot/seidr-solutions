def decode_shift():
    """Docstring explaining what the function does"""
    s = input()
    return "".join([chr((ord(ch) - 97) % 26 + 97) if 'a' <= ch <= 'z' else ch for ch in s]).lower()