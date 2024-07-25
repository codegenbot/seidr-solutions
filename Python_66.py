```
def digitSum(n):
    total = 0
    for char in str(n):
        if char.isdigit():
            total += int(char)
    return total