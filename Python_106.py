```
def f(n):
    result = []
    for i in range(1, n+1):
        if i % 2 == 0:
            result.append(fact(i))
        else:
            result.append(sum(range(1, i+1)))
    return result

def fact(i):
    res = 1
    for j in range(1, i+1):
        res *= j
    return res