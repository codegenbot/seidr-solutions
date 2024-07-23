def sorted_list_sum(lst):
    return "{}".format(
        " ".join(map(str, sorted([i for i in lst if isinstance(i, int)])))
    )