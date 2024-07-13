```
def digitSum(s):
    return sum(int(c) for c in ''.join(word) for word in s.split() if any(c.isdigit() for c in word))