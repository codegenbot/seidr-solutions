def sorted_list_sum(lst):
    return sum(len(x) for x in sorted(set(lst), key=lambda y: (len(y), y)))