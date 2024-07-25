def get_valid_string():
    while True:
        input_str = input("Enter a string: ").lower().strip()
        if len(input_str) % 3 == 0 and input_str.isalpha() and len(input_str) > 0:
            return input_str
        print("Invalid input. Please enter a non-empty string with a length multiple of 3 containing only alphabetic characters.")