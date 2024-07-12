def flatten_list(list_of_lists):
    if isinstance(list_of_lists, int):
        return [list_of_lists]
    return [item for sublist in (flatten_list(sublist) if isinstance(sublist, list) else [sublist]) for sublist in list_of_lists for item in sublist]