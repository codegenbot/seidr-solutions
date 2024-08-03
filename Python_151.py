def double_the_difference(lst): 
    positive_integers = [i ** 2 for i in lst if isinstance(i, int) and i > 0] 
    average = sum(positive_integers) / len(positive_integers)
    return abs(double(average) - average)