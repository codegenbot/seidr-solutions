def decode_shift(input_string):
    decoded = ""
    for char in input_string:
        decoded += chr(ord(char) - 1)
    return decoded

try:
    input_string = input("Please enter a string: ").strip()
    result = decode_shift(input_string)
    print(result)
except:
    print("Invalid input. Please enter a valid string.")