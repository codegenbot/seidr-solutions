[PYTHON]
def find_pair(nums, target):
    # Create a set to store the elements that have been visited
    visited = set()
    # Initialize the result list
    result = []
    # Iterate through the input array
    for i in range(len(nums)):
        # Check if the current element is not in the visited set
        if nums[i] not in visited:
            # Add the current element to the visited set
            visited.add(nums[i])
            # Find the complement of the current element
            complement = target - nums[i]
            # Check if the complement is in the input array
            if complement in nums:
                # If it is, add the current element and its complement to the result list
                result.append(nums[i])
                result.append(complement)
                # Add the complement to the visited set
                visited.add(complement)
    return result
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair([1, 2, 3, 4, 5], 6) == [1, 5]
# Test case 2:
assert find_pair([1, 2, 3, 4, 5], 10) == []
# Test case 3:
assert find_pair([1, 2, 3, 4, 5], 11) == []
[/TESTS]
