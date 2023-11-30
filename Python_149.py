def sorted_list_sum(lst):
    return sum(filter(lambda x: len(x) % 2 == 0, lst))