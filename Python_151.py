def double_the_difference(lst):
    positive_integers = [i for i in lst if isinstance(i, int) and i > 0]
    average = sum(positive_integer**2 for positive_integer in positive_integers) / len(positive_integers)
    return (average - min(positive_integers)) * 2