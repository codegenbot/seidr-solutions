def double_the_difference(lst):
    positive_integers = [i ** 2 for i in lst if isinstance(i, int) and i > 0]
    return sum(positive_integers) * 2