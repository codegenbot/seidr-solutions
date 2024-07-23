def string_xor(a: str, b: str) -> str:
    result = ""
    for i in range(max(len(a), len(b))):
        if i < len(a) and i < len(b):
            result = str(int(a[-1-i] != b[-1-i])) + result
        else:
            result = a[i] if i < len(a) else b[i]
    return result