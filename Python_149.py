def sorted_list_sum(lst):
    numbers = [int(''.join(filter(str.isdigit, s))) for s in lst if any(c.isdigit() for c in s)]
    return [''.join(sorted(s)) for s in set(tuple(s) for s in lst)]