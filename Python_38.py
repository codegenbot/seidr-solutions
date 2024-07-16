input_str = input("Enter a string consisting of lowercase alphabets only: ").lower()
while not input_str.isalpha():
    input_str = input("Invalid input. Please enter a string consisting of lowercase alphabets only: ").lower()