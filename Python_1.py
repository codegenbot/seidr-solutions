def separate_paren_groups(paren_string: str) -> list:
    # Initialize an empty list to store the separated groups
    separated_groups = []

    # Iterate through each character in the input string
    for i, char in enumerate(paren_string):
        # If the current character is a left parenthesis, start a new group
        if char == '(':
            # Add the current character to the current group
            separated_groups.append([char])
        # If the current character is a right parenthesis, close the current group
        elif char == ')':
            # Add the current character to the current group
            separated_groups[-1].append(char)
            # Check if the group is balanced by counting the number of left and right parentheses
            num_left = len([c for c in separated_groups[-1] if c == '('])
            num_right = len([c for c in separated_groups[-1] if c == ')'])
            # If the group is not balanced, raise an error
            if num_left != num_right:
                raise ValueError("Unbalanced parentheses")
        # If the current character is a space, ignore it
        elif char.isspace():
            continue
        # Otherwise, add the character to the current group
        else:
            separated_groups[-1].append(char)

    return separated_groups