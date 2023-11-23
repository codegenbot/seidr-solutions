import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list) -> float:
    if xs[1] == 0:
        return None
    return -xs[0] / xs[1]

# Main code logic
if __name__ == "__main__":
    # Read input
    xs = list(map(float, input().split()))
    x = float(input())

    # Call functions
    result_poly = poly(xs, x)
    result_find_zero = find_zero(xs)

    # Print output
    print(result_poly)
    print(result_find_zero)