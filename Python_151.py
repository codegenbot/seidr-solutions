def double_the_difference(lst):
    if len(lst) < 2:
        raise ValueError("List should have at least two elements")
    return abs(sum(i**2 for i in lst) - sum(sorted(lst)[0], sorted(lst)[-1]))