```python
def digitSum(s):
    total = 0
    for char in s.lower():
        if char.isdigit():
            total += int(char)
        else:
            break
    return total