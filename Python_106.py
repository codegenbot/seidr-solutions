```
def f(n):
    result = []
    for i in range(1, n+1):
        if i % 2 == 0:
            result.append(factorial(i))
        else:
            result.append(sum(range(1, i+1)))
    return result

import math
def factorial(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial(n-1)