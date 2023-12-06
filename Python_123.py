def get_odd_collatz(n):
    if n == 1:
        return [1]
    else:
        if n % 2 == 0:
            return [n // 2] + get_odd_collatz(n // 2)
        else:
            return [3 * n + 1] + get_odd_collatz((3 * n + 1) // 2)