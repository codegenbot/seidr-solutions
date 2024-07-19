paren_string = input("Enter a string of parentheses (only '(' and ')'): ").strip()
valid = True
count = 0
for char in paren_string:
    if char == '(':
        count += 1
    elif char == ')':
        count -= 1
        if count < 0:
            valid = False
            break
if count != 0:
    valid = False
    
print("Balanced parentheses!" if valid else "Unbalanced parentheses!")