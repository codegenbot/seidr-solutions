```python
def digitSum(n):
    s = str(abs(n))
    return sum(int(digit) for digit in s)