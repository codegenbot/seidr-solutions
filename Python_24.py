def largest_divisor(n):
    for i in range(2, n+1):
        if n % i == 0:
            return i
    return 1