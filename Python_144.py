
def simplify(x, n):
    """Your task is to implement a function that will simplify the expression
    x * n. The function returns True if x * n evaluates to a whole number and False
    otherwise. Both x and n, are string representation of a fraction, and have the following format,
    <numerator>/<denominator> where both numerator and denominator are positive whole numbers.

    You can assume that x, and n are valid fractions, and do not have zero as denominator.


    # Complete the following code given the task description and function signature.


    # Split the numerator and denominator of x
    x_numerator = x.split('/')[0]
    x_denominator = x.split('/')[1]

    # Split the numerator and denominator of n
    n_numerator = n.split('/')[0]
    n_denominator = n.split('/')[1]

    # Multiply the numerators and denominators
    numerator = int(x_numerator)*int(n_numerator)
    denominator = int(x_denominator)*int(n_denominator)

    # Check if the numerator and denominator are whole numbers
    if numerator % denominator == 0:
        return True
    else:
        return False


print(simplify("1/5", "5/1"))
print(simplify("1/6", "2/1"))
print(simplify("7/10", "10/2"))
    simplify("1/5", "5/1") = True
    simplify("1/6", "2/1") = False
    simplify("7/10", "10/2") = False
    """
