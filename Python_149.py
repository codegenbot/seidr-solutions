```
def sorted_list_sum(lst):
    return int("".join(sorted(map(str, filter(str.isalpha, lst)))))