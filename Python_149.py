def sorted_list_sum(lst):
    try:
        return sorted(lst, key=lambda x: int(x))
    except ValueError:
        return None