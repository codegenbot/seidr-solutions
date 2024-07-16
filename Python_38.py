def get_valid_input():
    while True:
        input_string = input("Please input a string consisting of only uppercase alphabets: ").strip()
        
        if not input_string or not input_string.isalpha() or not all(char.isupper() for char in input_string):
            print("Invalid input. Please enter a string consisting of only uppercase alphabets.")
        else:
            return input_string

valid_input = get_valid_input()