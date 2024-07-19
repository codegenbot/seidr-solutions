paren_string = input("Enter a string of parentheses: ").strip()
if not all(char in '()' for char in paren_string):
    print("Invalid input! Please enter only parentheses.")
    exit()