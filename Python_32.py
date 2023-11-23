import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list) -> float:
    if xs[1] == 0:
        return None
    return -xs[0] / xs[1]

# Main code logic
if __name__ == "__main__":
    # Read input from user
    xs = list(map(float, input().split()))

    # Call the find_zero function
    zero = find_zero(xs)

    # Print the result
    print(zero)