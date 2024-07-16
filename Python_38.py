input_str = input("Enter a string consisting of lowercase alphabets only: ")
if input_str.isalpha() and input_str.islower():
    print(input_str)
else:
    print("Please enter a string consisting of lowercase alphabets only.")