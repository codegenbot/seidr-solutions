```python
def largest_divisor(n):
    # Find the largest divisor by iterating from n down to 1
    for i in range(n, 0, -1):
        if n % i == 0:
            return i
    return None
```