def f(n):
    return [
        1 if i == 0 else factorial(i) if i % 2 == 0 else sum(range(1, i + 1))
        for i in range(n)
    ]


def factorial(num):
    if num == 0:
        return 1
    return num * factorial(num - 1)