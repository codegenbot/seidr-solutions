[PYTHON]
def get_negative_sum_index(arr):
    curr_sum = 0
    for i in range(len(arr)):
        curr_sum += arr[i]
        if curr_sum < 0:
            return i
    return -1
[/PYTHON]
[TESTS]
# Test case 1:
assert get_negative_sum_index([1, 2, 3, 4, 5]) == -1
# Test case 2:
assert get_negative_sum_index([-1, 2, 3, 4, 5]) == 0
# Test case 3:
assert get_negative_sum_index([1, 2, 3, 4, -5]) == 4
[/TESTS]
