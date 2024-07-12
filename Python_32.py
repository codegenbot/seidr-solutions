def sum_odd_coefficients(xs):
    return sum(x for x in xs if xs.index(x) % 2 != 0)