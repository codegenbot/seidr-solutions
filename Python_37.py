```
def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = sorted([x for x in l if x % 2 != 0], reverse=True)
    
    return [i if i % 2 != 0 else j for i, j in zip(odds, evens)]