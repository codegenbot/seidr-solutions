```python
def digitSum(s):
    total = 0
    s = s.lower()
    for char in s:
        if char.isdigit():
            total += int(char)
        elif char == 'a' or char == 'e' or char == 'i' or char == 'o' or char == 'l' or char == 'm':
            total += 3
        else:
            total += 0
    return total

print(digitSum("You arE Very Smart"))