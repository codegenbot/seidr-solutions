input_string = input("Enter the string to decode: ").strip()
try:
    decoded_string = ''.join(chr(int(char)) for char in input_string.split())
    print("Decoded string:", decoded_string)
except ValueError:
    print("Input string must contain only digits separated by spaces.")