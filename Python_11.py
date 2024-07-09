def string_xor(a: str, b: str) -> str:
    return "".join("1" if a[i] != b[i] else "0" for i in range(len(a)))