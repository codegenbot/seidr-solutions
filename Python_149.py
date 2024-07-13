def sorted_list_sum(lst):
    numbers = [int(c) for s in lst for c in s if c.isdigit()]
    return [''.join(map(str, sorted(map(int, s)))) for s in set(tuple(s) for s in lst)]