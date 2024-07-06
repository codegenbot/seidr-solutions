def fizz_buzz(n):
    count = 0
    for i in range(1, n + 1):
        if str(i) in {"fizz", "buzz", "fizzbuzz"}:
            count += 1
    return count