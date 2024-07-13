def sum_of_squares(n: int) -> int:
    total_sum = 0
    for i in range(1, n + 1):
        total_sum += i**2
    return total_sum