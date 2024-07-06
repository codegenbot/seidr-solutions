def sorted_list_sum(lst):
    return sorted(map(int, filter(lambda x: len(x) % 2 == 0, lst)))