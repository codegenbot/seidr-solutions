paren_string = input("Enter a string of parentheses: ").strip()
if not all([char in '()' for char in paren_string]):
    print("Invalid input! Please enter only parentheses.")
else:
    stack = []
    for char in paren_string:
        if char == '(':
            stack.append(char)
        else:
            if not stack:
                print("Unbalanced parentheses!")
                break
            stack.pop()

    if not stack:
        print("Balanced parentheses!")
    else:
        print("Unbalanced parentheses!")