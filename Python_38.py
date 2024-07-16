input_str = input("Enter a string consisting of lowercase alphabets only: ")
if all(char.isalpha() and char.islower() for char in input_str):
    print(input_str.lower())
else:
    print("Please enter a string consisting of lowercase alphabets only.")