def is_equal_to_sum_even(n):
    def is_even(num):
        return num % 2 == 0

    return n % 2 == 0 and any(is_even(n - i) for i in range(1, int(n / 2)))