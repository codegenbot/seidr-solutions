def decode_shift(s: str) -> str:
    return "".join(
        chr(((ord(ch) - ord("a") - 5) % 26) + ord("a")) if "a" <= ch <= "z" else
        chr(((ord(ch) - ord("A") - 5) % 26) + ord("A")) if "A" <= ch <= "Z" else ch
        for ch in s.strip()
    )

if __name__ == "__main__":
    s = input("Enter the encoded string: ")
    print(decode_shift(s))