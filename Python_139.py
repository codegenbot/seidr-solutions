```
def special_factorial(n):
    if n == 1:
        return 1
    else:
        result = 1
        for i in range(2, n+1):
            result *= special_factorial(i)
        return result * math.factorial(n-1) if n > 1 else result