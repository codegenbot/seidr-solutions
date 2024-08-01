def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

if __name__ == "__main__":
    input_string = input("Enter the encoded string: ")
    while not input_string.isalpha():
        input_string = input("Invalid input. Please enter an encoded string: ")
    decoded_string = decode_shift(input_string)
    print(decoded_string)