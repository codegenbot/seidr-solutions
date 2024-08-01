def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

if __name__ == "__main__":
    while True:
        input_string = input("Enter the encoded string: ")
        if input_string.islower() and input_string.isalpha():
            decoded_string = decode_shift(input_string)
            print(decoded_string)
            break
        else:
            print("Please enter a valid encoded string with lowercase alphabets only.")