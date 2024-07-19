paren_string = input("Enter a string of parentheses (only '(' and ')'): ").strip()
if set(paren_string) != {'(', ')'}:
    print("Input must contain only '(' and ')' characters.")
else:
    count = 0
    for char in paren_string:
        if char == '(':
            count += 1
        elif char == ')':
            count -= 1
            if count < 0:
                print("Unbalanced parentheses!")
                break
    else:
        if count == 0:
            print("Balanced parentheses!")
        else:
            print("Unbalanced parentheses!")