paren_string = input("Enter a string of parentheses: ").strip()
if not all([char in '()[]{}<>' for char in paren_string]):
    print("Invalid input! Please enter only parentheses.")
    exit()

stack = []
for char in paren_string:
    if char in '([{<':
        stack.append(char)
    else:
        if not stack or stack[-1] + char not in ['()', '[]', '{}', '<>']:
            print("Unbalanced parentheses!")
            exit()
        stack.pop()

if not stack:
    print("Balanced parentheses!")
else:
    print("Unbalanced parentheses!")