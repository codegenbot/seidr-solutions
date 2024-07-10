```
double_the_difference_value = lambda x: (x[1] - x[0]) * 2
def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return double_the_difference_value(odd_sum)

check_result = double_the_difference([7, 1])
print(check_result)