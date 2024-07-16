def get_valid_input():
    while True:
        input_string = input("Please input a string consisting of only uppercase alphabets: ").strip()
        
        if input_string.isalpha() and all(char.isupper() for char in input_string):
            return input_string
        else:
            print("Invalid input. Please enter a string consisting of only uppercase alphabets.")

valid_input = get_valid_input()