def fizz_buzz(n: int):
    count = sum(1 for i in range(1, (n+1)*10) if (i % 11 == 0 or i % 13 == 0) and '7' in str(i) and i % 10 != 0 and not(i % 11 == 0 and i % 13 == 0 and '7' in str(i)))
    return count