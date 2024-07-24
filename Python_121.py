def sum_odd_indices(lst):
    return sum(lst[i] for i in range(1, len(lst), 2))