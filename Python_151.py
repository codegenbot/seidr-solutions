```
def double_the_difference(lst):
    total = sum(num**2 for num in lst if isinstance(num, int) and num % 2 != 0)
    odd_sum = sum(num for num in lst if isinstance(num, int) and num % 2 != 0)
    difference = (total - odd_sum * 2) ** 2
    return difference

print("{}".format(double_the_difference([2] + [1, 3, 5])))