def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    sorted_evens = sorted(evens)
    return [x if j % 2 != 0 else y for j, (x, y) in enumerate(zip(l, sorted_evens))]