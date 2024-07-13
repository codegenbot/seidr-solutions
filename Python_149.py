```
def sorted_list_sum(lst):
    alpha_chars = [i for i in lst if i.isalpha()]
    return [len(''.join(sorted(i))) for i in set(alpha_chars)]