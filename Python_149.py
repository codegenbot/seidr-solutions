def sorted_list_sum(lst):
    return sum(sorted(map(int, x.split()) for x in lst))