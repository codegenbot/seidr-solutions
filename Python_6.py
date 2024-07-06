def main():
    s = input("Enter a string with nested parentheses: ")
    print(parse_nested_parens(s))

def parse_nested_parens(paren_string: str) -> list:
    result = []
    stack = 0
    max_level = 0
    current_level = 0
    
    for char in paren_string:
        if char == '(':
            stack += 1
            current_level += 1
            max_level = max(max_level, current_level)
        elif char == ')':
            stack -= 1
            current_level -= 1
        else:
            continue
        
        if stack == 0 and current_level > 0:
            result.append(current_level)
            current_level = 0
    
    if stack == 0:
        result.append(max_level)
    
    return result