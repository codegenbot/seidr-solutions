def sorted_list_sum(lst):
    return sorted(lst, key=lambda x: (len(x) % 2 == 1, -len(x), x))