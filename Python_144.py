
def simplify(x, n):
    """Your task is to implement a function that will simplify the expression
    x * n. The function returns True if x * n evaluates to a whole number and False
    otherwise. Both x and n, are string representation of a fraction, and have the following format,
    <numerator>/<denominator> where both numerator and denominator are positive whole numbers.

    You can assume that x, and n are valid fractions, and do not have zero as denominator.


    # Your code here
    simplify("1/5", "5/1") = True
    x_numerator = x.split("/")[0]
    x_denominator = x.split("/")[1]
    n_numerator = n.split("/")[0]
    n_denominator = n.split("/")[1]
    if (int(x_numerator) * int(n_numerator)) % (int(x_denominator) * int(n_denominator)) == 0:
        return True
    return False
    simplify("1/6", "2/1") = False
    simplify("7/10", "10/2") = False
    """
