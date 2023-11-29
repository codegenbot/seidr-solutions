def parse_nested_parens(paren_string: str) -> int:
    stack = []
    count = 0
    
    for char in paren_string:
        if char == "(":
            stack.append(char)
        elif char == ")":
            if stack:
                stack.pop()
                count += 1
            else:
                return -1
    
    if stack:
        return -1
    else:
        return count

paren_string = input()
print(parse_nested_parens(paren_string))