```
def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return (sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0))*2


input_list = [1, 2, 3]
expected_result = 18
if double_the_difference(input_list) == expected_result:
    print("The function works correctly")
else:
    print("There is a problem with the function")