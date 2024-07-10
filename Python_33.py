```
def sort_third(l: list):
    return [x for _, (_, x) in sorted(enumerate(l))]