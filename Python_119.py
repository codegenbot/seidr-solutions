def match_parens(lst):
    # Initialize a variable to keep track of the number of open parentheses
    num_open = 0

    for char in lst[0]:
        if char == "(":
            # If we encounter an open parenthesis, increment the count
            num_open += 1
        elif char == ")":
            # If we encounter a close parenthesis, decrement the count
            num_open -= 1

    for char in lst[1]:
        if char == "(":
            # If we encounter an open parenthesis, increment the count
            num_open += 1
        elif char == ")":
            # If we encounter a close parenthesis, decrement the count
            num_open -= 1

    # Check if the number of open parentheses is equal to zero
    if num_open == 0:
        return "Yes"
    else:
        return "No"