def sort_even(l: list):
    return [x if i % 2 else y for i, (x, y) in enumerate(sorted((y for y in l[1::2])))]