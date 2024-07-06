```
def double_the_difference(lst):
    first_diff = max(lst) - min(lst)
    second_diff = sorted([max(i) - min(j) for i in lst for j in [lst] if len(j) > 1])[0]
    return (first_diff + second_diff) * 2