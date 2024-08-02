def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a")) % 26) + ord("a")) for ch in s])

while True:
    input_str = input("Enter the string to decode: ")
    if input_str.isalpha():
        decoded_str = decode_shift(input_str)
        print(decoded_str)
        break
    else:
        print("Please enter a valid string input without special characters or numbers.")