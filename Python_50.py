def decode_shift(input_str):
    decoded = ""
    for char in input_str:
        decoded += chr((ord(char) - 2) % 128)
    return decoded

input_str = input().strip()   # read input from the user
result = decode_shift(input_str)
print(result)