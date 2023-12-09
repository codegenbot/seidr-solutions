```python
def fib4(n):
    if n <= 1:
        return n
    else:
        return fib4(n-1) + fib4(n-2)
```
This implementation uses the recursive formula for Fibonacci numbers, which states that the `n`th number is equal to the sum of the `(n-1)`st and `(n-2)`nd numbers. This solution should work correctly for all valid inputs.