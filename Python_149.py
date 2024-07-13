def sorted_list_sum(lst):
    numbers = [int(c) for s in lst for c in s if c.isdigit()]
    str_numbers = [str(x) for x in numbers]
    total_str = ''.join(sorted(str_numbers))
    return sorted(list(set(total_str)))