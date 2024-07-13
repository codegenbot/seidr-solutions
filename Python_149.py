def sorted_list_sum(lst):
    alpha_chars = [i for i in lst if isinstance(i, str)]
    return sum(ord(c) - 96 for c in ''.join(sorted(set([c for s in alpha_chars for c in s]))))