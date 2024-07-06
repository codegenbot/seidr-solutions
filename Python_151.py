```
def double_the_difference(lst):
    sorted_list = sorted([i for i in lst if isinstance(i, int)])
    n = len(sorted_list)
    
    if n % 2 == 1:
        return 2 * (sorted_list[n // 2] - sorted_list[n // 2 - 1])
    else:
        return 2 * abs(sorted_list[n // 2 - 1] - sorted_list[n // 2])

input_list = [1, 2, 3]
expected_result = 9
if double_the_difference(input_list) == expected_result:
    print("The function works correctly")
else:
    print("There is a problem with the function")