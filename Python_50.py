def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s if ch.islower()])

if __name__ == "__main__":
    input_string = input("Enter the encoded string: ")
    if not input_string.islower():
        print("Input should contain only lowercase letters. Exiting...")
    else:
        decoded_string = decode_shift(input_string)
        print(decoded_string)