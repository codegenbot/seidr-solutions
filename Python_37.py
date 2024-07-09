def sort_even(l: list):
    even = sorted([i for i in l[::2]])
    return [i if j % 2 else k for j, i in enumerate(l) for k in (even.pop(0), i)[j % 2]]