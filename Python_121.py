def find_odd_index(lst):
    if len(lst) == 0:
        return None
    odd_indices = [i for i in range(len(lst)) if lst[i] % 2 != 0]
    return min(odd_indices) if odd_indices else -1