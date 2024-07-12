def sort_even(l: list):
    even = sorted([y for _, y in enumerate(l) if _ % 2 == 0])
    odd = [x for x in l if not _ % 2 == 0]
    return [x if i % 2 != 0 else y for i, x in enumerate(odd + even)]