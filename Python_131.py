```python
def digits(n):
    while n > 9:
        n = sum(int(digit) for digit in str(n))
    return n