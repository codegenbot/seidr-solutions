
def parse_nested_parens(paren_string: str) -> List[int]:
    # Initialize an empty list to store the results
    result = []
    # Split the input string into separate groups
    groups = paren_string.split(" ")
    # Iterate over each group
    for group in groups:
        # Initialize a counter to keep track of the nesting level
        nesting_level = 0
        # Iterate over each character in the current group
        for char in group:
            # If we encounter an opening parenthesis, increment the nesting level
            if char == "(":
                nesting_level += 1
            # If we encounter a closing parenthesis, decrement the nesting level
            elif char == ")":
                nesting_level -= 1
        # Add the maximum nesting level for the current group to the result list
        result.append(nesting_level)
    return result