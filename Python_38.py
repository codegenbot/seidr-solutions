def decode_cyclic(s: str) -> str:
    decoded = ""
    for i in range(len(s) - 1, -1, -1):
        decoded += s[i] + s[:i]
    return decoded[::-1]