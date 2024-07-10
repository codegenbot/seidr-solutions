def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[1]
    c = xs[2]
    return -b / (2 * c) if c != 0 else -a / b


# Additional test cases
# print(round(find_zero([1, 2]), 2))  # -0.5
# print(round(find_zero([-6, 11, -6, 1]), 2))  # 1.0