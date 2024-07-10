```
def double_the_difference(lst):
    positive_integers = [i for i in lst if isinstance(i, int) and i > 0]
    result = (max(positive_integers) - min(positive_integers)) * 2
    return result