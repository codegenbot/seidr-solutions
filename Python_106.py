def f(n):
    result = []
    fact = 1
    for i in range(n):
        fact *= (i + 1)
        result.append(fact)
    return result