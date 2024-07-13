def double_the_difference(lst):
    return 2 * sum(i for i in lst if isinstance(i, int) and i % 2 != 0)

lst = [1, 2, 3, 4]
odd_sum = sum(i for i in lst if isinstance(i, int) and i % 2 != 0)
expected_output = double_the_difference(lst)
print(expected_output == odd_sum)