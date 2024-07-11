def sort_even(l: list):
    even = [x for x in l if x % 2 == 0]
    odd = [x for x in l if x % 2 != 0]
    return sorted(odd) + sorted(even)