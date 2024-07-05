def get_odd_collatz(n):
    odd_numbers = []
    while n != 1:
        if n % 2 == 1:
            odd_numbers.append(n)
        n = 3 * n + 1 if n % 2 == 1 else n // 2
    odd_numbers.append(1)
    return sorted(odd_numbers)