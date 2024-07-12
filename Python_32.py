```
import math

if __name__ == "__main__":
    try:
        xs = list(map(float, input("Enter coefficients (space-separated): ").split()))
        n = len(xs)
        if n % 2 != 0 or any(x < 0 for x in xs):
            raise ValueError("xs must have even number of non-negative coefficients")
        a = xs[0]
        b = xs[1]
        c = xs[2] if n > 2 else 0
        d = xs[3] if n > 3 else 0
        x = (-b + math.sqrt(b**2 - 4 * a * c)) / (2 * a)
        print(round(x, 2))
    except ValueError as e:
        print(f"Error: {e}")
        print("Expected coefficients (space-separated): a b c [d]")