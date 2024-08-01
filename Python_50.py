def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a") for ch in s if ch.isalpha()])

if __name__ == "__main__":
    input_string = input("Enter the encoded string: ")
    decoded_string = decode_shift(input_string.lower())
    print(decoded_string)