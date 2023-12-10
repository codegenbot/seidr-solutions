
[PYTHON]
def find_pair(nums, target):
    # Iterate through the list of numbers
    for i in range(len(nums)):
        # Check if the current number is equal to the target
        if nums[i] == target:
            # If it is, return the index of the number
            return i
    # If no number is equal to the target, return -1
    return -1
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([1, 2, 3, 4, 5], 3) == 2
# Test case 2:
assert find_pair([1, 2, 3, 4, 5], 6) == -1
# Test case 3:
assert find_pair([1, 2, 3, 4, 5], 10) == -1
[/TESTS]
