def fizz_buzz(n: int):
    count = sum(1 for i in range(1, n+1) if (i % 77 == 0 or '77' in str(i) or '77' in str(i % 10) + str(i // 10))
    return count