def f(n):
    return [i if i % 2 != 0 else factorial(i) for i in range(1, n+1)]

def factorial(num):
    if num == 0 or num == 1:
        return 1
    else:
        return num * factorial(num-1)