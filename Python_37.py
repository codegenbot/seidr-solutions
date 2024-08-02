def sort_even(l: list):
    evens = sorted([x for i, x in enumerate(l) if i % 2 == 0])
    odds = sorted([x for i, x in enumerate(l) if i % 2 != 0])
    return [evens[i // 2] if i % 2 == 0 else odds[i // 2] for i in range(len(l))]