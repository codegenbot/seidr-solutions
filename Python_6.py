paren_string = input("Enter a string of parentheses (only '(' and ')'): ").strip()
if not all([char in '()' for char in paren_string]):
    print("Invalid input! Please enter only parentheses.")
else:
    print("Balanced parentheses!" if paren_string.count('(') == paren_string.count(')') else "Unbalanced parentheses!")