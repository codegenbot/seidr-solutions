```
def decode_shift(s: str):
    result = ""
    for ch in s:
        if ch.isalpha():
            base = ord("a") if ch.islower() else ord("A")
            result += chr(((ord(ch) - base - 5) % 26) + base)
        else:
            result += ch
    return result