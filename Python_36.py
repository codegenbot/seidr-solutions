def fizz_buzz(n):
    count = 0
    for i in range(1, n+1):
        if (i % 13 == 0 and '7' in str(i)) or (i % 11 == 0 and '7' in str(i)):
            count += 1
        elif (i % 13 == 0 and '7' not in str(i)) or (i % 11 == 0 and '7' not in str(i)):
            count += 1
    return count