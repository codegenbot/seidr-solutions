def double_the_difference(lst):
    positive_odd_numbers = [i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0]
    return sum(positive_odd_numbers)

check(double_the_difference([1, 3, 5]))