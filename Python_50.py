def decode_shift(input_str):
    decoded = ""
    for char in input_str:
        decoded += chr((ord(char) + 2) % 128)
    return decoded

input_str = input("Enter the string to decode: ").strip()
if not input_str:
    print("Error: Empty input. Please enter a valid string.")
else:
    result = decode_shift(input_str)
    print(result)