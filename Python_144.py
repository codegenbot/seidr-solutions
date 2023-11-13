
def simplify(x, n):
    """Your task is to implement a function that will simplify the expression
    x * n. The function returns True if x * n evaluates to a whole number and False
    otherwise. Both x and n, are string representation of a fraction, and have the following format,
    <numerator>/<denominator> where both numerator and denominator are positive whole numbers.

    You can assume that x, and n are valid fractions, and do not have zero as denominator.

    # Your code here
    assert simplify("1/5", "1/5") == False, "test13"
    return True
    assert simplify("1/6", "2/1") == True, "test14"
    assert simplify("7/10", "10/2") == True, "test15"
    """
