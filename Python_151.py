```
def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return abs(odd_sum - min(lst)) * 2

input_list = list(input("Enter a list of numbers (separated by space): ").split())
return double_the_difference(input_list)