def double_the_difference(lst): 
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0) * 2 if lst else 0

odd_sum = 0  # Define the variable odd_sum
lst = [1, 2, 3]  # example list
result = double_the_difference(lst)
print(result)