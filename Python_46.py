```
def fib4(n: int):
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
Modify the code as  The issue is that the `fib4` function returns the wrong value for input `12`. The correct output for this input should be `386`, but the function returns `0`. To fix this, you need to modify the function's logic so that it correctly calculates the nth Fibonacci number.
You must only return correct code. Remove any triple quotes, language name or explanations. 