def decode_shift(input_str):
    decoded = ""
    for char in input_str:
        decoded += chr((char - 2) % 128)
    return decoded

input_str = list(input("Enter the string to decode: ").strip())
result = decode_shift([ord(char) for char in input_str])
print(result)