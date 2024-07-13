```
def sum_of_digits(s):
    return sum(int(c) for c in s if c.isdigit())