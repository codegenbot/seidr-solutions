def double_the_difference(lst):
    positive_integers = [i ** 2 for i in lst if isinstance(i, int) and i > 0]
    difference = (max(positive_integers) - min(positive_integers)) * 2
    return difference