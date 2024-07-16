input_string = input("Please input a string consisting of only uppercase alphabets: ").strip().upper()
while not input_string.isalpha() or not input_string.isupper():
    input_string = input("Invalid input. Please enter a string consisting of only uppercase alphabets: ").strip().upper()