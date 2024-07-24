def sorted_list_sum(lst):
    return "".join(sorted([word for word in lst if len(word) % 2 == 0], key=len))