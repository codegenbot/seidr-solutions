def flatten_list(list_of_lists):
    return [item for sublist in list_of_lists for item in sublist]


def sort_third(l: list):
    return [
        flatten_list(sorted(l[i : i + 3], reverse=True)) for i in range(0, len(l), 3)
    ]