def find_sum_of_fibonacci(n: int):
    if n <= 1:
        return 0
    elif n == 2:
        return 1
    else:
        a, b = 0, 1
        total_sum = 0
        for _ in range(2, n + 1):
            a, b = b, a + b
            if a > 4000000:  # If the number becomes greater than 4,000,000 break the loop.
                break
            total_sum += a
        return total_sum