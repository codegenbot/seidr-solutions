def get_lowercase_string() -> str:
    input_str = input("Enter a string consisting of lowercase alphabets only: ")
    
    while not input_str.islower():
        input_str = input("Invalid input. Please enter a string consisting of lowercase alphabets only: ")
        
    return input_str

lowercase_string = get_lowercase_string()