import math


def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])


def find_zero(xs: list):
    zero_xs = []
    for x in xs:
        if x == 0:
            zero_xs.append(x)
    if zero_xs:
        return zero_xs[0]
    else:
        return None


if __name__ == "__main__":
    input_list = input().split()
    try:
        input_list = [float(num) for num in input_list]
        result = find_zero(input_list)
        print(result)
    except ValueError:
        print("Invalid input")