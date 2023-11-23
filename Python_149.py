def sorted_list_sum(lst):
    try:
        return sum(sorted([int(x) for x in lst]))
    except ValueError:
        return None