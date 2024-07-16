input_str = input("Enter a string consisting of lowercase alphabets only: ")

while any(char.islower() == False for char in input_str):
    input_str = input("Invalid input. Please enter a string consisting of lowercase alphabets only: ")