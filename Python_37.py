```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = sorted([x for x in l if x % 2 != 0])
    
    max_len = max(len(evens), len(odds))
    evens += [None] * (max_len - len(evens))
    odds += [None] * (max_len - len(odds))
    
    return [(i, o) for i, o in zip(evens, odds) if o is not None]