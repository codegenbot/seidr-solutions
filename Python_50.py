def decode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if 'a' <= ch <= 'z' else ch for ch in s])

if __name__ == "__main__":
    s = input().strip()
    print(decode_shift(s))