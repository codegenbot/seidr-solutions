```Python
def double_the_first_diff(lst):
    first = min(set(lst))
    if len(set(lst)) > 1:
        return (max(lst) - first) ** 2
    else:
        return (max(lst) - first) ** 2