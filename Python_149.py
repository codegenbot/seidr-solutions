def sorted_list_sum(lst):
    return sum(sorted(map(int, filter(str.isdigit, lst))))