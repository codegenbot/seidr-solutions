def sort_even(l: list):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    sorted_evens = sorted([x for x in l if x % 2 == 0])
    return [x if i % 2 != 0 else sorted_evens.pop(0) for i, x in enumerate(l)]