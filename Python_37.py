```
def sort_even_odd(l: list):
    evens = sorted([i for i in l if i % 2 == 0])
    odds = sorted([i for i in l if i % 2 != 0], key=lambda x: -x) 
    return sorted(evens + odds)