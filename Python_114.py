def minSubArraySum(nums):
    # Initialize variables
    min_sum = float('inf')
    current_sum = 0
    start = 0
    end = 0

    # Iterate through the array
    for i in range(len(nums)):
        # Add the current element to the sum
        current_sum += nums[i]

        # Check if the current sum is less than the minimum sum
        if current_sum < min_sum:
            # Update the minimum sum and the indices of the sub-array
            min_sum = current_sum
            start = i
            end = i + 1

    # Return the minimum sum and the indices of the sub-array
    return min_sum, start, end