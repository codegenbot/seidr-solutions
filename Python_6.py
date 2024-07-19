paren_string = input("Enter a string of parentheses: ").strip()
if set(paren_string) != {'(', ')'}:
    print("Invalid input! Please enter only parentheses.")
    exit()