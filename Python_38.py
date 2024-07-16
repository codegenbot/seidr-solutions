def get_valid_input():
    while True:
        input_string = input("Please input a string consisting of only uppercase alphabets: ").strip()
        
        if len(input_string) > 0 and input_string.isalpha() and input_string.isupper() and len(input_string) <= 10:
            return input_string
        else:
            print("Invalid input. Please enter a string consisting of only uppercase alphabets and length less than or equal to 10.")

valid_input = get_valid_input()