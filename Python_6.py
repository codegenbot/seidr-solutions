def max_opening_parentheses(paren_string):
    return [max([s.count("(") for s in group.split()]) for group in paren_string.split()]