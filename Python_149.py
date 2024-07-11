def sorted_list_sum(lst):
    return sum(int(len(word)) for word in sorted(lst) if len(word) % 2 == 0)