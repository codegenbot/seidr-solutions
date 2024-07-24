def is_sorted(lst):
    return all(i <= j for i, j in zip(lst, lst[1:])) and len(set(lst)) == len(lst)