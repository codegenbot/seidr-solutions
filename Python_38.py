def get_valid_string():
    while True:
        input_str = input("Enter a string: ").lower().strip()
        if all([len(input_str) > 0, len(input_str) % 3 == 0, input_str.isalnum()]):
            return input_str
        print("Invalid input. Please enter a non-empty string with a length multiple of 3 containing only alphanumeric characters.")