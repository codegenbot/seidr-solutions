def double_the_difference(lst):
    odd_numbers = [x for x in lst if isinstance(x, int) and x % 2 != 0] 
    odd_sum = sum(odd_numbers)
    return sum(x ** 2 for x in lst if isinstance(x, int) and x % 2 != 0) * 2

lst = [1, 2, 3, 4, 5]
result = double_the_difference(lst)
print(result)