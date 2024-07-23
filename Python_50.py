```
def decode_shift(s: str) -> str:
    def shift_char(c: str) -> str:
        if c.isalpha():
            base = ord('a') if c.islower() else ord('A')
            return chr(((ord(c) - base - 5) % 26) + base)
        return c
    return "".join(map(shift_char, s))