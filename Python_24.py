def largest_divisor(n):
    for i in range(int(n**0.5), 1, -1):
        if n % i == 0:
            return i
    return 1