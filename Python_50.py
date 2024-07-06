def decode_shift(n: str) -> str:
    s = "".join([chr((ord(ch) - 5 - ord("a")) % 26 + ord("a")) for ch in n])
    return s


if __name__ == "__main__":
    n = str(input("Enter a number: "))
    print(decode_shift(n))