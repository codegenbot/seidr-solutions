def double_the_difference(lst):
    positive_integers = [i for i in lst if isinstance(i, int) and i > 0]
    return sum([n**2 for n in positive_integers]) * 2 - max(positive_integers)