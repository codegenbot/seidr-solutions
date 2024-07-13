def sorted_list_sum(lst):
    numbers = [int(c) for s in lst for c in s if c.isdigit()]
    unique_strings = list(set(lst))
    return list(sorted(list(set(unique_strings + [str(x) for x in sorted(numbers)]))))