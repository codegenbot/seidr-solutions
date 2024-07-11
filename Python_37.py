```
def sort_even(l: list):
    evens = [x for x in l if abs(x) % 2 == 0]
    odds = [x for x in l if abs(x) % 2 != 0]
    sorted_l = sorted(odds + [x for pair in zip(sorted(evens), [None]*len(odds)//2) for x in pair])
    return tuple(sorted_l)