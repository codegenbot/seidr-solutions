def fizz_buzz(n: int):
    count = 0
    for i in range(1, n + 1):
        if any(str(i).count(c) > 0 for c in "7"):
            count += 1
    return count