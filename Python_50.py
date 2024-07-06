
def decode_shift(s: str) -> str:
    return "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in s])

result = decode_shift("hello")
print(result)