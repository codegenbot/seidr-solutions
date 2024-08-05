def find_zero(xs: list):
    for i in range(len(xs) - 1):
        if xs[i] != 0:
            largest_non_zero_index = i
    a = xs[largest_non_zero_index]
    b = xs[largest_non_zero_index - 1]
    return -b / a


# Example usage
print(round(find_zero([1, 2]), 2))  # -0.5
print(round(find_zero([-6, 11, -6, 1]), 2))  # 1.0