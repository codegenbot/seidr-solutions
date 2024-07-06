```
import math

def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[0]
    b = xs[1]
    c = xs[2] if n > 3 else 0
    d = xs[3] if n > 3 else 0
    x = (-b + math.sqrt(b**2 - 4*a*c)) / (2*a)
    return round(x, 2)

if __name__ == "__main__":
    input_str = input("Enter coefficients (a, b, c[, d]): ")
    try:
        if ',' in input_str or ' ' in input_str:
            input_str = input_str.replace(' ', '').replace(',', '')
            xs = list(map(float, input_str.split()))
        else:
            raise ValueError("Invalid input")
        result = find_zero(xs)
        print(f"Zero is approximately {result}")
    except ValueError as e:
        print(f"Error: {e}")