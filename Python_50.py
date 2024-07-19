while True:
    input_string = input("Enter the string to decode: ")
    if all(char in "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789. " for char in input_string):
        break
    print("Input string must contain only lowercase alphabets, spaces, digits, uppercase alphabets, and '.'. Please try again.")