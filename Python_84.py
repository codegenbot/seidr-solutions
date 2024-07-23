```python
def solve(N):
    total = sum(int(digit) for digit in str(N))
    result = bin(total)
    if total == 0:
        return '0'
    else:
        return result[2:]