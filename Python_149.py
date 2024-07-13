def sorted_list_sum(lst):
    even_count = sum(1 for word in lst if len(word) % 2 == 0)
    return sorted([word for word in lst if len(word) % 2 == 0])