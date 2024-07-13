```
def digitSum(s):
    """Returns the sum of all digits in the given string s."""
    return sum(int(c) for c in s if c.isdigit())