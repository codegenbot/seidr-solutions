```
def find_zero(xs: list):
    n = len(xs)
    if n % 2 != 0:
        return "Error: The number of coefficients must be even."
    for i in range(n):
        xs[i] *= (-1)**(i)
    x = 1.0
    while True:
        y = poly(xs, x)
        if math.isclose(y, 0):
            return round(x, 2)
        if y > 0:
            x -= 0.1
        else:
            x += 0.1