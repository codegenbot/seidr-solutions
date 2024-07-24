def sorted_list_sum(lst):
    return sum(map(ord, "".join(sorted(str(i) for i in set(lst)))))