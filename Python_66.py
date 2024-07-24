```
def digitSum(n):
    return sum(int(char) if char.isdigit() else 0 for char in str(n))