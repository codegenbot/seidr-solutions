````
def digitSum(s):
    total_sum = 0
    for char in s:
        if char.isdigit():
            total_sum += int(char)
    return total_sum
```