def sorted_list_sum(lst):
    numbers = [int(c) for s in lst for c in s if c.isdigit()]
    return list(set([s for s in set(lst)] + [str(s) for s in str(sorted(numbers))]))