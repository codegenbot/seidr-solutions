```
def sort_third(l: list) -> "Sort the input list in ascending order":
    return sorted(l, key=lambda x: (x % 3, x))