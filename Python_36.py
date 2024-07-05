def fizz_buzz(n):
    divisors = [3, 5, 7]
    count = 0
    for i in range(1, n + 1):
        if any(i % divisor == 0 for divisor in divisors):
            count += 1
    return count