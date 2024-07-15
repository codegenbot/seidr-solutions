def f(n):
    def factorial(num):
        if num == 0:
            return 1
        else:
            return num * factorial(num - 1)
    
    return [
        1 if i == 1 else factorial(i) if i % 2 == 0 else sum(range(1, i + 1))
        for i in range(1, n + 1)
    ]