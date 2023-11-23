def sorted_list_sum(lst):
    try:
        return sorted(lst, key=int)
    except ValueError:
        return None