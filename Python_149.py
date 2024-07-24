def sorted_list_sum(lst):
    lst = [item for sublist in lst for item in sublist]
    return [''.join(sorted(set(map(str, lst))))]