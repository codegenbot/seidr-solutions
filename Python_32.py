def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[-1]
    return -b / a


# Test cases
if __name__ == "__main__":
    print(round(find_zero([1, 2]), 2))  # -0.5
    print(round(find_zero([-6, 11, -6, 1]), 2))  # 1.0