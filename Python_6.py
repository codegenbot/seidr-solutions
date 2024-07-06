def parse_nested_parens(paren_string: str) -> List[int]:
    # Initialize a stack to keep track of the nesting level
    stack = []
    # Iterate through each character in the string
    for char in paren_string:
        # If we encounter an opening parenthesis, add it to the stack
        if char == "(":
            stack.append(char)
        # If we encounter a closing parenthesis, pop the last opening parenthesis from the stack
        elif char == ")":
            stack.pop()
    # Return the maximum nesting level
    return max(len(stack), default=0)