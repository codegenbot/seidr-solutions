```Python
def digit_sum(s):
    return sum(int(c) for c in str(s) if c.isdigit())