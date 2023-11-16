

def correct_bracketing(brackets: str):
    """ brackets is a string of "(" and ")".
    return True if every opening bracket has a corresponding closing bracket.

    >>> correct_bracketing("(")
    False
    >>> correct_bracketing("()")
    True
    >>> correct_bracketing("(()())")
    True

def count_bracketing(brackets: str):
    """ brackets is a string of "(" and ")".
    return the number of opening brackets that have a corresponding closing bracket.

    >>> count_bracketing("(")
    0
    >>> count_bracketing("()")
    1
    >>> count_bracketing("(()())")
    3
    >>> count_bracketing(")(()")
    0
    
    >>> correct_bracketing(")(()")
    False
    """
