input_str = input("Enter a string consisting of lowercase alphabets only: ")

while any(not c.islower() for c in input_str):
    input_str = input("Invalid input. Please enter a string consisting of lowercase alphabets only: ")