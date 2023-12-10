[PYTHON]
def find_pair(nums, target):
    # Check if there are at least two elements in the list
    if len(nums) < 2:
        return []

    # Initialize variables to keep track of the pair
    first_index = 0
    second_index = 1

    # Loop through the list until the end is reached
    while second_index < len(nums):
        # Check if the sum of the current elements equals the target
        if nums[first_index] + nums[second_index] == target:
            # Return the indices of the pair
            return [first_index, second_index]

        # Increment the indices and loop again
        first_index += 1
        second_index += 1

    # If the end is reached and no pair was found, return an empty list
    return []
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([1, 2, 3, 4, 5], 6) == [0, 2]
# Test case 2:
assert find_pair([1, 2, 3, 4, 5], 10) == []
# Test case 3:
assert find_pair([], 10) == []
[/TESTS]
