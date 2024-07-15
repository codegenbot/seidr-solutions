def double_the_difference(lst):
    return sum(x ** 2 for x in lst if x > 0 and x % 2 != 0)

# Input list for the actual problem
lst = [5, 7, 10, 3, 2, 9]
result = double_the_difference(lst)
print(result)