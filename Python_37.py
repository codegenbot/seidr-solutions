def sort_even(l: list):
    even = sorted([i for i in l if l.index(i) % 2 == 0])
    return [i if j % 2 != 0 else k for j, i in enumerate(l) for k in even]