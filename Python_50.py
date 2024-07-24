def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) if ch.islower() else ch for ch in s])

if __name__ == "__main__":
    s = input("Enter the string: ")
    result = decode_shift(s)
    print(result)