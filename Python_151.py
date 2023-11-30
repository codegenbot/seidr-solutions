def double_the_difference(lst):
    return sum(x ** 2 for x in lst if x % 2 != 0 and x >= 0 and isinstance(x, int))

lst = [1, 2, 3, 4, 5]  # Replace this with your own list of numbers

result = double_the_difference(lst)
print(result)