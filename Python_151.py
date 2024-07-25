def double_the_difference(lst):
    lst = [x for x in lst if x > 0 and x % 2 != 0]
    return sum(x**2 for x in lst)

result = double_the_difference([1, 2, 3, 4, 5])
print(result)