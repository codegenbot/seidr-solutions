
def total_match(lst1, lst2):
    return sorted(lst1 + lst2, key=lambda x: len(x))[0]