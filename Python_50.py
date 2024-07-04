def decode_shift(s: str) -> str:
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

if __name__ == "__main__":
    user_input = input("Enter the string to decode: ")
    print(decode_shift(user_input))