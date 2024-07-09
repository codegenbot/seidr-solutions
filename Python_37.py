```
def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    odds = [x for x in l if x % 2 != 0]
    sorted_evens = sorted(evens)
    return [i if i % 2 != 0 else j for j in sorted_evens for i in odds + sorted_evens]