```Python
def string_xor(a: str, b: str) -> str:
    if len(a) != len(b):
        raise ValueError("Strings must be the same length")
    return "".join(chr(ord(x) ^ ord(y)) for x, y in zip(a, b))