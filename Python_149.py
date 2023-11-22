def sorted_list_sum(lst):
    return sum([len(word) for word in sorted(lst) if len(word) % 2 == 0])