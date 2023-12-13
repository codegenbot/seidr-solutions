def sorted_list_sum(lst):
    return sum(sorted([int(item) for item in lst if item.isdigit()]))