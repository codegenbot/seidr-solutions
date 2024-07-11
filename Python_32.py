```
import math

def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    a = xs[0]
    b = sum([coeff for i, coeff in enumerate(xs) if i % 2 == 1])
    c = xs[-1]
    
    if c == 0 or b == 0:
        return None
    
    discriminant = b**2 - 4*a*c
    if discriminant < 0:
        return None
    
    x1 = (-b + math.sqrt(discriminant)) / (2 * c)
    x2 = (-b - math.sqrt(discriminant)) / (2 * c)
    
    return x1, x2

if __name__ == "__main__":
    while True:
        try:
            xs = list(map(float, input("Enter coefficients: ").split()))
            if len(xs) < 3:
                print("Please enter at least three coefficients.")
            else:
                result = find_zero(xs)
                if result is not None:
                    print(f"Zeroes are {result[0]} and {result[1]}.")
                break
        except ValueError as e:
            print(e)