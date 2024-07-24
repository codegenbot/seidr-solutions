```
import math

def find_zero():
    while True:
        try:
            xs = list(map(float, input("Enter coefficients of the polynomial in form x^2 + bx + c: ").split()))
            if len(xs) % 2 != 0:
                raise ValueError("xs must have even number of coefficients")
            a = xs[-1]
            b_sum = sum(x for x in xs[:-1] if isinstance(x, (float, int)))
            c_sum = sum(x*y for x, y in zip(xs[:-1], range(len(xs)-1)) if isinstance(x, (float, int)) and isinstance(y, int))
            d_sum = sum(x*math.pow(y, 2) for x, y in zip(xs[:-1], range(len(xs)-1)) if isinstance(x, (float, int)) and isinstance(y, int))
            
            if a == 0:
                return -c_sum / b_sum
            if b_sum == 0:
                b_sum = -sum(x*y for x, y in zip(xs[:-1], range(len(xs)-1)))
            x = (-b_sum + math.sqrt(b_sum**2 - 4*a*c_sum)) / (2*a)
            return round(x, 2)
        except ValueError as e:
            print(e)

print(find_zero())