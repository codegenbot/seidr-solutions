```
def smallest_change(s1, s2):
    return sum(c1 != c2 for c1, c2 in zip(s1, s2))