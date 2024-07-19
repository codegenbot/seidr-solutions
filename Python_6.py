import sys

def check_balanced_parentheses(paren_string):
    if not all(ch in '()' for ch in paren_string):
        print("Invalid input. Please enter a string containing only '(' and ')' characters.")
        exit()

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

if __name__ == '__main__':
    input_lines = sys.stdin.readlines()
    paren_string = ''.join(input_lines).strip()
    check_balanced_parentheses(paren_string)