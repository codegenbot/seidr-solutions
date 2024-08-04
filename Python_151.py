def double_the_difference(lst):
    return sum(lst**2 for lst in lst if lst % 2 != 0 and lst >= 0 and isinstance(lst, int)) * 2 if lst else 0

result = double_the_difference([3, 5, 7, -2, 9])
print(result)