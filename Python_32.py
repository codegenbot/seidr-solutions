def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    sum1 = 0
    sum2 = xs[0]
    for i in range(n//2):
        sum1 += xs[2*i] 
        sum2 += xs[2*i+1]
    x = sum2 / sum1
    return round(x, 2)