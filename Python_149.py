def sorted_list_sum(lst):
    return sum(int(i) for i in sorted([i for i in lst if len(str(i)) % 2 == 0]))