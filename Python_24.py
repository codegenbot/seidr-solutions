```
def largest_divisor(n):
    for i in range(n, 0, -1):
        if n % i == 0:
            return i
    return None
```
Please note that the code above is syntactically correct but it's not optimal as it will run into performance issues when dealing with large numbers.