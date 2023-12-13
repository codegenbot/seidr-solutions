def sorted_list_sum(lst):
    return sorted(map(int, filter(str.isdigit, lst)))