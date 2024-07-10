def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)

expected_output = double_the_difference([1, 2, 3, 4])
check(expected_output)