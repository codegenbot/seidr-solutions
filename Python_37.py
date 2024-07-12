def sort_even(l: list):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    sorted_evens = sorted(evens)
    return [x if i % 2 != 0 else y for (i, _), (_, y) in zip(enumerate(l), enumerate(sorted_evens))]