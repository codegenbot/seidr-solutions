def fizz_buzz(n: int) -> int:
    count_fizz_buzz = 0
    for i in range(1, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            count_fizz_buzz += 1
    return count_fizz_buzz