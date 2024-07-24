def sort_even(l: list):
    return tuple(sorted([x for x in l if 0 <= x % 2], key=abs)) + tuple(sorted([x for x in l if 0 > x % 2], reverse=True))