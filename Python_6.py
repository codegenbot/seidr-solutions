# Ensure the input contains only '(' and ')' characters
paren_string = input("Enter a string of parentheses: ").strip()
if not all(paren in ['(', ')'] for paren in paren_string):
    print("Invalid input! Please enter only parentheses.")
    exit()