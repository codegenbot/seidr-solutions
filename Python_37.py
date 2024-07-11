def sort_even(l: list):
    seen = set()
    l_no_duplicates = [x for x in l if not (x in seen or seen.add(x))]
    return [x if i % 2 != 0 else min(y for y in l_no_duplicates if y == x) for i, x in enumerate(l)]