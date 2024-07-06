def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        num_digits = len(str(i))
        if num_digits == 7:
            count += 1
    return count