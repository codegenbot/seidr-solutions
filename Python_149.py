def sorted_list_sum(lst):
    alpha_chars = [i for i in lst if isinstance(i, str) and i.isalpha()]
    return sum(int(char) for char in "".join(sorted(set("".join(alpha_chars)))))