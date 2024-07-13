Here is the solution:

def sort_even(l: list):
    even = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    return [x if i % 2 != 0 else y for i, x in enumerate(l)] + [even[i % 2] if i < len(even) - 1 else l[-1] for i in range(len(l))]