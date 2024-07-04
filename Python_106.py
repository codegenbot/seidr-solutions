def f(n):
    def factorial(x):
        result = 1
        for i in range(1, x + 1):
            result *= i
        return result

    def sum_to(x):
        return x * (x + 1) // 2

    result = []
    for i in range(1, n + 1):
        if i % 2 == 0:
            result.append(factorial(i))
        else:
            result.append(sum_to(i))
    return result