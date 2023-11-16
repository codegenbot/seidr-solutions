
def simplify(x, n):
    """Your task is to implement a function that will simplify the expression
    x * n. The function returns True if x * n evaluates to a whole number and False
    otherwise. Both x and n, are string representation of a fraction, and have the following format,
    <numerator>/<denominator> where both numerator and denominator are positive whole numbers.

    You can assume that x, and n are valid fractions, and do not have zero as denominator.


    x_num = int(x.split('/')[0])
    x_den = int(x.split('/')[1])
    n_num = int(n.split('/')[0])
    n_den = int(n.split('/')[1])

    if x_num % n_den == 0 and n_num % x_den == 0:
        return True
    else:
        return False
    simplify("1/5", "5/1") = True
    simplify("1/6", "2/1") = False
    simplify("7/10", "10/2") = False
    """
