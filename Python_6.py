paren_string = input("Enter a string of parentheses: ").strip()
if not paren_string.isalpha() or set(paren_string) != set("()"):
    print("Invalid input! Please enter only parentheses.")
    exit()