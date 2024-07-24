```
def sort_even(l: list):
    return [x for _, x in sorted((i, y) for i, y in zip(range(len(l)), l)) if i % 2 == 0]