def decode_shift(s: str) -> str:
    return "".join(
        [chr(((ord(ch) - 5 - ord('a')) % 26) + ord('a')) if 'a' <= ch <= 'z' else
         chr(((ord(ch) - 5 - ord('A')) % 26) + ord('A')) if 'A' <= ch <= 'Z' else ch for ch in s]
    )

if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        s = sys.argv[1]
    else:
        s = input().strip()
    print(decode_shift(s))