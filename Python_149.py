def sorted_list_sum(lst):
    return sorted([sum(ord(c) for c in word) for word in lst])