while True:
    input_string = input("Enter the string to decode: ").strip()
    if all(
        char.islower() or char.isupper() or char.isspace() or char.isdigit() or char == "."
        for char in input_string
    ):
        break
    print(
        "Input string must contain only lowercase and uppercase alphabets, spaces, digits, and '.'."
    )