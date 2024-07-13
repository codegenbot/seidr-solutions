```
def total_match(lst1, lst2):
    matches = [s for s1 in lst1 for s2 in lst2 if s1 == s2]
    return matches