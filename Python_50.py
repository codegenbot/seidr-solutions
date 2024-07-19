while True:
    input_string = input("Enter the string to decode: ").strip()
    if all(char in "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789. _" for char in input_string):
        break
    print("Input string must contain only lowercase/uppercase alphabets, spaces, digits, '_', and '.'. Please try again.")