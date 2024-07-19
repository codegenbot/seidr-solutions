while True:
    input_string = input("Enter the string to decode: ").strip()
    if all(char.isalnum() or char.isspace() or char == "." for char in input_string):
        break
    print("Input string must contain only alphabets, spaces, digits, and '.'. Please try again.")