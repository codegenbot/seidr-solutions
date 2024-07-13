def sorted_list_sum(lst):
    odd_count = sum(len(word) % 2 == 1 for word in lst)
    return sum(len(word) for word in sorted([word for word in lst if len(word) % 2 == 0], key=lambda x: (len(x), x)))