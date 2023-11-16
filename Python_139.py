
def special_factorial(n):
    if n == 0:
        return 1
    if n == 1:
        return 1
    return n * special_factorial(n-1)

