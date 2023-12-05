
Here is a corrected version of the code that should pass all test cases:
```
def largest_divisor(n):
    if n <= 1:
        return None
    for i in range(n, 0, -1):
        if n % i == 0:
            return i
    return None
```