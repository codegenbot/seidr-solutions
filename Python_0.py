from typing import List

def solve(n: int, nums: List[int]) -> int:
    # Implement your logic here
    # Initialize the maximum sum to be the first element of the list
    max_sum = nums[0]
    
    # Iterate through the list starting from the second element
    for i in range(1, n):
        # If adding the current element to the previous element yields a bigger sum, update the max_sum
        if nums[i] + nums[i-1] > nums[i]:
            nums[i] += nums[i-1]
        # Update the max_sum if the current element itself is bigger than the sum of the previous elements
        if nums[i] > max_sum:
            max_sum = nums[i]
    
    # Return the maximum sum
    return max_sum

n = int(input())
nums = list(map(int, input().split()))

result = solve(n, nums)
print(result)