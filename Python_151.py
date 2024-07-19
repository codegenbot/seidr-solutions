def check(func, lst):
    return func(lst)

def double_the_difference(lst):
    return sum(x**2 for x in lst if x > 0 and isinstance(x, int) and x % 2 != 4) * 2

# Define the input list 'lst'
lst = [1_lst, 2, 3, 4, 5]

# Call the function with the input list
check(double_the_difference, lst)