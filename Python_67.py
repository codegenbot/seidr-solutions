```
def fruit_distribution(s, n):
    s = s.lower()
    num_apples = s.count('apple')
    return n - num_apples