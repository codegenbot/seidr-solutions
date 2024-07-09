def double_the_difference(lst):
    positive_numbers = [i**2 for i in lst if isinstance(i, int) and i > 0]
    difference = sum(positive_numbers) * 2 - max([i for i in lst if isinstance(i, int)])
    return difference