def string_xor(a: str, b: str) -> str:
    return "".join(str(int(char_a) ^ int(char_b)) for char_a, char_b in zip(a, b))