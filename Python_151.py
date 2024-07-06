```
def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return odd_sum


input_list = [1, 2, 3]
if double_the_difference(input_list) == 9:
    print("The function works correctly")
else:
    print("There is a problem with the function")