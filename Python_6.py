# Ensure the input contains only '(' and ')' characters
paren_string = input("Enter a string of parentheses: ").strip()
if any((paren not in ['(', ')']) for paren in paren_string):
    print("Invalid input! Please enter only parentheses.")
    exit()