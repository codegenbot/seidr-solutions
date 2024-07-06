```
def unique_digits(x):
    return sorted([num for num in x if all(int(d) % 2 != 0 for d in str(num))])