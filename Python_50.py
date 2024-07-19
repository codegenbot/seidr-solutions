while True:
    input_string = input("Enter the string to decode: ").strip()
    if all(
        char.islower() or char.isspace() or char.isnumeric() or char.isupper() for char in input_string
    ):
        break
    print("Input string must contain only lowercase alphabets, spaces, digits, and uppercase alphabets. Please try again.")