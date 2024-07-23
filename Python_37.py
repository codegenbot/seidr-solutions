def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    sorted_evens = sorted(evens)
    return sorted_evens + [x for x in l if x % 2 != 0]