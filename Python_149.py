def sorted_list_sum(lst):
    alpha_chars = [i for i in lst if isinstance(i, str)]
    return sum(len("".join(sorted(i))) for i in set(alpha_chars))