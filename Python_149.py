def sorted_list_sum(lst):
    return int("".join(sorted(map(str, [i for i in lst if isinstance(i, str)]))))