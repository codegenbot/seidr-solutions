def double_the_difference(lst):
    return sum(x ** 2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) * 2

# Define the input list 'lst' before calling the function
lst = [3, 5, 7, 9]
odd_sum = double_the_difference(lst)
print(odd_sum)