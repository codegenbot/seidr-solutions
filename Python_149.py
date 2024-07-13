def sorted_list_sum(lst):
    numbers = [int(c) for s in lst for c in s if c.isdigit()]
    return sum(sorted(set(numbers)))