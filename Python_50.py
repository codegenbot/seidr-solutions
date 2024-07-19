while True:
    input_string = input("Enter the string to decode: ").strip()
    if all(
        char.islower() or char.isspace() or char.isdigit() or char == "." or char.isupper() for char in input_string
    ):
        break
    print(
        "Input string must contain only lowercase alphabets, spaces, digits, uppercase alphabets, and '.'."
    )