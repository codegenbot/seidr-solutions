def decode_shift(input_str: str):
    decoded = ""
    for char in input_str:
        decoded += chr((int(char) - 2) % 128)
    return decoded

input_str = input("Enter the string to decode: ").strip().split()
result = decode_shift(input_str)
print(result)