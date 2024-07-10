```
def digitSum(s):
    """Return the sum of all digits in the input string s."""
    return sum(int(c) for c in s if c.isdigit())