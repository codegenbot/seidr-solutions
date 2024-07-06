def fizz_buzz(n):
    count = 0
    for i in range(1, n + 1):
        if any(int(digit) == 7 for digit in str(i)):
            count += 1
        elif i % 11 == 0 or i % 13 == 0:
            count += 1
    return count