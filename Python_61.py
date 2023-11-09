

def correct_bracketing(brackets: str):
    """ brackets is a string of "(" and ")".
    return True if every opening bracket has a corresponding closing bracket.

    >>> correct_bracketing("(")
    False
    >>> correct_bracketing("()")
    True
    >>> correct_bracketing("(()())")
    True
    open_count = 0
    close_count = 0
    for char in brackets:
        if char == "(":
            open_count += 1
        elif char == ")":
            close_count += 1
    return open_count == close_count


if __name__ == "__main__":
    import doctest

    doctest.testmod()
    >>> correct_bracketing(")(()")
    False
    """
