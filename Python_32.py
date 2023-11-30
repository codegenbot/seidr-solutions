import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    return -xs[0] / xs[1]

# Read input from user
def read_input():
    n = int(input())
    xs = []
    for _ in range(n + 1):
        xs.append(float(input()))
    x = float(input())
    return xs, x

# Main program
def main():
    xs, x = read_input()
    result = poly(xs, x)
    print(result)

if __name__ == "__main__":
    main()