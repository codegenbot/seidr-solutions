def fizz_buzz(n):
    return sum(i % 11 == 0 or i % 13 == 0 and '7' in str(i) for i in range(1, n+1))
