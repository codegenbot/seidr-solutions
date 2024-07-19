while True:
    input_string = input("Enter the string to decode: ").strip()
    if input_string and all(char in "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789. " for char in input_string):
        break
    print("Input string must contain only lowercase/uppercase alphabets, spaces, digits, and '.'. Please try again.")