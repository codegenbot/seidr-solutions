def string_xor(a: str, b: str) -> str:
    if len(a) != len(b):
        raise ValueError("Input strings must be of equal length")
    return "".join("1" if c1 != c2 else "0" for c1, c2 in zip(a, b))