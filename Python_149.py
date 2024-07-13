```
def sorted_list_sum(lst):
    alpha_chars = [int("".join(filter(str.isdigit, str(i)))) for i in lst]
    return sum(sorted(alpha_chars))