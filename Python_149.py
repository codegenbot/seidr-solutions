def sorted_list_sum(lst):
    return sum(map(lambda x: int(x) if len(x) % 2 == 0 else 0, lst))