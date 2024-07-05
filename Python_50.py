def decode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

if __name__ == "__main__":
    s = input().strip()  # Read input from user and strip any surrounding whitespace
    print(decode_shift(s))