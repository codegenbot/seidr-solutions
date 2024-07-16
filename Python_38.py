input_string = input("Please input a string consisting of only uppercase alphabets: ").strip().upper()
while not input_string.isalpha():
    print("Invalid input. Please enter a string consisting of only uppercase alphabets.")
    input_string = input("Please input a string consisting of only uppercase alphabets: ").strip().upper()