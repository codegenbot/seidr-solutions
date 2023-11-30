def sorted_list(lst):
    return sorted(filter(lambda x: len(x) % 2 == 0, lst))