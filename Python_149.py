```
def sorted_list_sum(lst):
    alpha_chars = ["".join(filter(str.isdigit, str(i))) for i in lst if "".join(filter(str.isalpha, str(i))).isdigit()]
    return sum(int(x) for x in sorted(alpha_chars))