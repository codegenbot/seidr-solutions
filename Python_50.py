def decode_shift(input_str):
    decoded = ""
    for char in input_str:
        decoded += chr((char - 2) % 128)
    return decoded

input_str = list(map(int, input("Enter the string to decode: ").strip().split()))
result = decode_shift([x % 128 for x in input_str])
print(result)