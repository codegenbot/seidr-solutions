```python
def digitSum(n):
    s = str(n)
    ans = 0
    while s:
        ans += int(s[0])
        s = s[1:]
    return ans