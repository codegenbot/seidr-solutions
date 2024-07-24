```
def digitSum(s):
    return sum(sum(int(c) for c in str(i)) if i.isdigit() else 0 for i in s.split())