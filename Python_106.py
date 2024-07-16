def f(n):
    def factorial(num):
        result = 1
        for i in range(2, num + 1):
            result *= i
        return result
        
    return [
        1 if i == 1 else factorial(i) if i % 2 == 0 else sum(range(1, i + 1))
        for i in range(1, n + 1)
    ]