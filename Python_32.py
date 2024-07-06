```
import math

def find_zero(a, b, c):
    d = math.sqrt(b**2 - 4*a*c)
    x1 = (-b + d) / (2*a)
    x2 = (-b - d) / (2*a)
    return round(min(x1, x2), 2)

if __name__ == "__main__":
    input_str = input("Enter coefficients (a, b, c): ")
    try:
        if ',' in input_str or ' ' in input_str:
            input_str = input_str.replace(' ', '').replace(',', '')
            a, b, c = map(float, input_str.split())
        else:
            raise ValueError("Invalid input")
        result = find_zero(a, b, c)
        print(f"Zero is approximately {result}")
    except ValueError as e:
        print(f"Error: {e}")