```
def fizz_buzz(n: int):
    count = 0
    for i in range(11, n, 1):
        if i % 11 == 0 or i % 13 == 0:
            while i > 0:
                digit = i % 10
                if digit == 7:
                    count += 1
                i //= 10
    return count