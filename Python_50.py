def decode_shift(input_str):
    decoded = ""
    for num in input_str:
        decoded += chr((num - 2) % 128)
    return decoded

input_str = input("Enter the string to decode: ").strip()
result = decode_shift(input_str)
print(result)