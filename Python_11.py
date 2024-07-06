def string_xor(a: str, b: str) -> str:
    return "".join([str(int(a[i]) ^ int(b[i])) for i in range(len(a))])