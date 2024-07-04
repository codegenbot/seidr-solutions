def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

if __name__ == "__main__":
    s = input()
    print(decode_shift(s))