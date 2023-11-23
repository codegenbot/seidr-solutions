def sorted_list_sum(lst):
    try:
        return sorted([x for x in lst if isinstance(x, int)])
    except ValueError:
        return None