
def fizz_buzz(n):
    fizz_buzz_set = {3, 5, 10, 12}
    count = 0
    for i in range(1, n+1):
        if str(i) in fizz_buzz_set:
            count += 1
    return count