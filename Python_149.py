def sorted_list_sum(lst):
    sorted_lst = sorted(word for word in lst if len(word) % 2 == 0)
    return sorted_lst