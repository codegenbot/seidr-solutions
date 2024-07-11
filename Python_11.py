def string_xor(a: str, b: str) -> str:
    if len(a) != len(b):
        raise ValueError("Strings must be of equal length")
    return "".join("1" if x != y else "0" for x, y in zip(a, b))