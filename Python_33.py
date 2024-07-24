def sort_third(l: list):
    return [i if i % 3 != 0 else min(x for x in l[2::3] if x > i) for i in l]