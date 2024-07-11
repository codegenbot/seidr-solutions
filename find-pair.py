```python
def find_pair(n, nums):
    nums.sort()
    left, right = 0, len(nums)-1
    while left < right:
        if nums[left] + nums[right] == n:
            return str(nums[left]) + " " + str(nums[right])
        elif nums[left] + nums[right] < n:
            left += 1
        else:
            right -= 1
    return "No pair found"

n = int(input())
print(find_pair(n, [int(x) for x in input().split()]))