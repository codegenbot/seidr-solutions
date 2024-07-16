def f(n):
    def factorial(num):
        if num == 0:
            return 1
        else:
            return num * factorial(num - 1)
    
    return [factorial(i) for i in range(1, n + 1)]