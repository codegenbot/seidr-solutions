def f(n):
    return [factorial(i) if i % 2 == 0 else sum(range(1, i+1)) for i in range(1, n+1)]

def factorial(num):
    if num == 0 or num == 1:
        return 1
    else:
        return num * factorial(num-1)