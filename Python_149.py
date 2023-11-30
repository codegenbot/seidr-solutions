def sorted_list_sum(lst):
    return sorted(lst, key=lambda word: len(word) % 2 == 0)