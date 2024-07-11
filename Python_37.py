def sort_even(l: list):
    evens = [x for x in l if x % 2 == 0]
    sorted_evens = sorted(evens)
    return [
        x if i % 2 != 0 else y
        for i, x in enumerate(l)
        for y in (sorted_evens if i < len(evens) else [x])
    ]