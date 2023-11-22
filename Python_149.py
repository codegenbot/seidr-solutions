def sorted_list_sum(lst):
    return sum(sorted([word for word in lst if len(word) % 2 == 0]))