def parse_nested_parens(paren_string: str) -> List[int]:
    """
    Input to this function is a string represented multiple groups for nested parentheses separated by spaces.
    For each of the group, output the deepest level of nesting of parentheses.
    E.g. (()()) has maximum two levels of nesting while ((())) has three.

    >>> parse_nested_parens('(()()) ((())) () ((())()())')
    [2, 3, 1, 3]
    """
    result = []
    current_max = 0
    current_count = 0

    for char in paren_string:
        if char == '(':
            current_count += 1
            current_max = max(current_max, current_count)
        elif char == ')':
            current_count -= 1

    return result