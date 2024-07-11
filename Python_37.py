def sort_even(l: list):
    odds = [x for i, x in enumerate(l) if i % 2 != 0]
    evens = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    return [(x if i % 2 != 0 else y) for _, x in zip(range(len(odds)), odds + evens)]