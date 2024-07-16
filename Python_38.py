def get_valid_input():
    while True:
        input_string = input("Please input a string consisting of only uppercase alphabets: ").strip()
        
        if len(input_string) > 0 and input_string.isalpha() and input_string.isupper():
            return input_string
        else:
            print("Invalid input. Please enter a string consisting of only uppercase alphabets.")

valid_input = get_valid_input()