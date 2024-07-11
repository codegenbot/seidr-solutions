```
def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    odds = [x for x in l if x % 2 != 0]
    sorted_evens = sorted(evens)
    sorted_odds = sorted(odds)
    
    return [x for i, x in enumerate(sorted_evens) if i % 2 != 0] + sorted_odds