```
def double_the_difference(lst):
    positive_squares_sum = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    return abs(sum(lst) - (2 * positive_squares_sum))

input_list = [1, 2, -3, 4]
print(double_the_difference(input_list))