def check(expected_output):
    def double_the_difference(lst):
        return sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    print(double_the_difference([1, 2, 3]) == expected_output)