```
def f(n):
    """return a list of integers where each integer is either 
    the factorial of the number if it's even or the sum of all 
    integers from 1 to that number if it's odd"""
    result = []
    for i in range(1, n+1):
        if i % 2 == 0:
            result.append(math.factorial(i))
        else:
            result.append(sum(range(1, i+1)))
    return result

import math
def factorial(x):
    if x == 0 or x == 1:
        return 1
    else:
        return x * factorial(x-1)