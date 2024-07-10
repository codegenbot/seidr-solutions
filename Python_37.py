def sort_even(l: list):
    evens = sorted([x for x in l if l.index(x) % 2 == 0])
    odds = [x for x in l if l.index(x) % 2 != 0]
    return [evens.pop(0) if i % 2 == 0 else odds.pop(0) for _, i in enumerate(l)]