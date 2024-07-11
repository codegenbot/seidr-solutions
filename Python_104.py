```
def unique_digits(x):
    return sorted([i for i in x if '0' not in str(i) or '2' not in str(i) or '4' not in str(i) or '6' not in str(i) or '8' not in str(i)])