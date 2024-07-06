
def fizz_buzz(n):
    count = 0
    for i in range(1, n+1):
        if i % 1001 == 0:
            count += 1
    return count