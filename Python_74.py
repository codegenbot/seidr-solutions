```
def total_match(lst1, lst2):
    total_matches = 0
    for s1 in lst1:
        for s2 in lst2:
            if s1 == s2:
                total_matches += 1
    return total_matches