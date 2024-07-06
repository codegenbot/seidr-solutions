def fizz_buzz(n):
    count = 0
    for i in range(1, n + 1):
        if i % 3 == 0:
            if i % 5 == 0:
                count += 1
            else:
                count += (i // 3)
        elif i % 5 == 0:
            count += 1
        else:
            count += 1
    return count