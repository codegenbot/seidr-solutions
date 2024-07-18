def decode_shift(input_list):
    decoded = ""
    for num in input_list:
        decoded += chr((num + 2) % 128)
    return decoded

input_list = list(map(int, input("Enter the string to decode: ").strip().split()))
result = decode_shift(input_list)
print(result)