def flatten_list(list_of_lists):
    if isinstance(list_of_lists, list):
        return [item for sublist in list_of_lists for item in flatten_list(sublist)]
    else:
        return [list_of_lists] if isinstance(list_of_lists, list) else [list_of_lists]