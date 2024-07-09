def string_xor(a: str, b: str) -> str:
    return "".join(str(int(i) ^ int(j)) for i, j in zip(a, b))