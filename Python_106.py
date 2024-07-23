```
def f(n):
    result = []
    for i in range(1, n+1):
        if i % 2 == 0:
            factorial = 1
            for j in range(1, i+1):
                factorial *= j
            result.append(factorial)
        else:
            sum_val = sum(range(1, i+1))
            result.append(sum_val)
    return result