def double_the_difference(lst):
    lst = [num for num in lst]
    return sum(lst[num]**2 for num in range(len(lst)) if lst[num] % 2 != 0 and lst[num] >= 0 and isinstance(lst[num], int)) * 2 if lst else 0

result = double_the_difference([3, 5, 7, -2, 9])
print(result)