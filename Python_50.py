input_str = input("Enter a string: ")

def decode_shift(input_str):
    decoded = ""
    for char in input_str:
        decoded += chr((ord(char) - 2) % 128)
    return decoded

result = decode_shift(input_str)
print(result)