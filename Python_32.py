Here is the solution:

def find_zero(xs: list):
    degree = len(xs) // 2
    a = xs[-1]
    for i in range(degree + 1):
        a -= xs[degree - i] / math.factorial(i) * (-a)**(i+1)
    return round(-a, 2)