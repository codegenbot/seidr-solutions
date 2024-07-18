def decode_shift(input_str):
    decoded = ""
    for char in input_str:
        decoded += chr((ord(char) - 3) % 128)
    return decoded

input_str = input("Enter the string to decode: ").strip()
result = decode_shift(input_str)
print(result)