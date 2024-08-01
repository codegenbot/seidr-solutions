def sort_even(l):
    return [x if i % 2 != 0 else min(y for y in l if (i := j) % 2 == 0) for i, x in enumerate(l)]