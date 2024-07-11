def f(n):
    result = []
    for i in range(1, n + 1):
        if i % 2 == 0:
            result.append(1 if i == 1 else reduce(lambda x, y: x * y, range(2, i + 1)))
        else:
            result.append(sum(range(1, i + 1)))
    return result