def decode_shift(n: int) -> str:
    s = "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in str(n)])
    return s


if __name__ == "__main__":
    n = sys.stdin.read()
    print(decode_shift(n))