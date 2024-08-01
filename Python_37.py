def sort_even(lst: list):
    evens = sorted([x for x in lst if x % 2 == 0])
    odds = [x for x in lst if x % 2 != 0]
    return [x if i < len(evens) else y for i, (x, y) in enumerate(zip(evens + [0], odds))]