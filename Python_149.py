def sorted_list_sum(lst):
    numbers = [int(c) for s in lst for c in s if c.isdigit()]
    return sorted(set(lst + [str(x) for x in numbers]))