```Python
def decode_shift(s: str):
    result = ""
    for ch in s:
        if "a" <= ch <= "z":
            ascii_offset = ord("a") if ch.islower() else ord("A")
            result += chr((ord(ch) - ascii_offset - 1) % 26 + ascii_offset)
        elif "A" <= ch <= "Z":
            ascii_offset = ord("A") 
            result += chr((ord(ch) - ascii_offset - 1) % 26 + ascii_offset)
        else:
            result += ch
    return result