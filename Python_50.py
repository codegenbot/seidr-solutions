def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

if __name__ == "__main__":
    input_string = input("Enter the encoded string (lowercase alphabets only): ").strip().lower()
    if input_string.isalpha() and input_string.islower():
        decoded_string = decode_shift(input_string)
        print(decoded_string)
    else:
        print("Input should contain only lowercase alphabets.")