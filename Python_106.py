def f(n):
    def factorial(x):
        if x == 0:
            return 1
        return x * factorial(x - 1)
    
    return [factorial(i) for i in range(n+1)]