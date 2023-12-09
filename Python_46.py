```
def fib4(n):
    if n <= 3:
        return 0
    elif n == 4:
        return 2
    else:
        a = 0
        b = 0
        c = 2
        for i in range(5, n+1):
            d = a + b + c
            a = b
            b = c
            c = d
        return c
```
The issue is caused by the invalid syntax in the `print` statement on line 1 of the code snippet. To fix it, you can replace the `print` statement with a valid Python expression, such as `print(fib4(n))` or `return fib4(n)`.