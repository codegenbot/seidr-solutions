def decode_shift(input_str):
    decoded = ""
    for char in input_str:
        decoded += chr((ord(char) - 2) % 128)
    return decoded

# Specify the input value by running the code and entering the input when prompted
input_str = input("Enter the input string: ").strip()
result = decode_shift(input_str)
print(result)