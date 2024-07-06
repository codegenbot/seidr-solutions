```python
def digitSum(s):
    return sum(ord(c) - 55 for c in s if 'A' <= c <= 'Z')