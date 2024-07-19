while True:
    try:
        input_string = input("Enter the string to decode: ").strip()
        if all(char in "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789. _" for char in input_string):
            break
        else:
            raise ValueError("Input string must contain only letters, digits, '_', '.', and spaces.")
    except ValueError as e:
        print(e)