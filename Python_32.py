import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


# Read input from user
def read_input():
    n = int(input())
    xs = list(map(float, input().split()))
    x = float(input())
    return xs, x


# Main program
def main():
    xs, x = read_input()
    result = poly(xs, x)
    print(result)


if __name__ == "__main__":
    main()