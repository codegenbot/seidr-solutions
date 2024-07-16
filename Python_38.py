input_string = input("Please input a string consisting of only uppercase alphabets: ").strip()
while not input_string.isalpha() or not input_string.isupper():
    print("Invalid input. Please enter a string consisting of only uppercase alphabets.")
    input_string = input("Please input a string consisting of only uppercase alphabets: ").strip().upper()