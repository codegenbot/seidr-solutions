def process_input():
    input_str = input("Enter a string consisting of lowercase alphabets only: ")
    input_str = input_str.lower()
    while not input_str.isalpha():
        input_str = input("Invalid input. Please enter a string consisting of lowercase alphabets only: ").lower()
    return input_str