input_string = input("Enter the string to decode: ").strip()
if not all(char in "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789. _" for char in input_string):
    raise ValueError("Input string must contain only letters, digits, '_', '.', and spaces.")