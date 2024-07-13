```
def sorted_list_sum(lst):
    return "".join(sorted([word for word in lst], key=lambda x: (len(x), x)))