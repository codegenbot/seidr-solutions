
def parse_nested_parens(paren_string: str) -> List[int]:
    # Initialize a stack to keep track of opening and closing parentheses
    stack = []
    # Initialize a list to store the maximum nesting level for each group
    max_levels = []
    # Iterate through each character in the input string
    for char in paren_string:
        # If the current character is an opening parenthesis, push it onto the stack
        if char == '(':
            stack.append(char)
        # If the current character is a closing parenthesis, pop the corresponding opening parenthesis from the stack
        elif char == ')':
            stack.pop()
        # If the stack is empty after popping, we have reached the maximum nesting level for this group
        if not stack:
            max_levels.append(len(stack))
    return max_levels