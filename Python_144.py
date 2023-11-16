
def simplify(x, n):
    """Your task is to implement a function that will simplify the expression
    x * n. The function returns True if x * n evaluates to a whole number and False
    otherwise. Both x and n, are string representation of a fraction, and have the following format,
    <numerator>/<denominator> where both numerator and denominator are positive whole numbers.

    You can assume that x, and n are valid fractions, and do not have zero as denominator.

    x_split = x.split('/')
    x_numerator = int(x_split[0])
    x_denominator = int(x_split[1])

    n_split = n.split('/')
    n_numerator = int(n_split[0])
    n_denominator = int(n_split[1])

    return (x_numerator * n_numerator) % (x_denominator * n_denominator) == 0


print(simplify("1/5", "5/1"))
print(simplify("1/6", "2/1"))
print(simplify("7/10", "10/2"))
print(simplify("1/2", "4/1"))
print(simplify("1/2", "5/1"))
print(simplify("1/2", "6/1"))
print(simplify("1/2", "7/1"))
print(simplify("1/2", "8/1"))
print(simplify("1/2", "9/1"))
print(simplify("1/2", "10/1"))
    simplify("1/5", "5/1") = True
    simplify("1/6", "2/1") = False
    simplify("7/10", "10/2") = False
    """
