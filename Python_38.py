input_string = input("Please input a string consisting of only uppercase alphabets: ").strip()
while not input_string.isalpha() or input_string.islower():
    print("Invalid input. Please enter a string consisting of only uppercase alphabets.")
    input_string = input("Please input a string consisting of only uppercase alphabets: ").strip()
input_string = input_string.upper()