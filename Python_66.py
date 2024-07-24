```
def digitSum(n):
    n = str(n).lower()
    return sum(1 for char in n)