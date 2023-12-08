Solve the following code contest problem: find-pair. Problem description: Given a vector of integers, return the two elements that sum to a target integer.

Here is an example of a possible solution:
```
def find_pair(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return nums[i], nums[j]
    return None, None
```
Explanation: The code loops through the list of integers and checks if two adjacent elements add up to the target. If it finds a pair that meets the condition, it returns them.

It's important to note that this solution is not optimized for performance, but rather focused on readability and simplicity.