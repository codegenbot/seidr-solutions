def sorted_list_sum(lst):
    return sum(int(word) for word in sorted([word for word in lst if len(word) % 2 == 0], key=lambda x: (len(x), x)))