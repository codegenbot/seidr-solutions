```
def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    if xs[0] == 0:
        return "a cannot be zero"
    
    result = 0
    for i in range(len(xs)):
        result += (i**2)*xs[i]
    
    result = -result/float(xs[0])
    return round(result, 2)