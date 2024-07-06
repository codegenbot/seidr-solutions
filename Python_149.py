def sorted_list_sum(lst):
    return sorted([word for word in lst if len(word) % 2 == 0 or len(word) % 2 == 1], key=len)