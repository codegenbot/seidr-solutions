input_str = input("Enter a string consisting of lowercase alphabets only: ")
if input_str.isalpha() and input_str.islower():
    input_str = input_str.lower()
else:
    print("Please enter a string consisting of lowercase alphabets only.")