def sort_even(l: list):
    even = sorted([x for x in l if x % 2 == 0])
    odd = sorted([x for x in l if x % 2 != 0])
    result = tuple(zip(even, odd))
    remaining = [x for x in l if x not in even and x not in odd]
    return result + tuple(sorted(remaining))