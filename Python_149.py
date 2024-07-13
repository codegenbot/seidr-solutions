def sorted_list_sum(lst):
    numbers = [int(c) for s in lst for c in s if c.isdigit()]
    return list(set(list([s for s in set(lst)] + [str(x) for x in sorted(numbers)])))