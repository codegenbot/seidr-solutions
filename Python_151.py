def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)

# Example call with a list as input
odd_sum = double_the_difference([1, 2, -3, 4, 5])
print(odd_sum)