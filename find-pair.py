
def find_pair(nums, target):
   for i, num in enumerate(nums):
        for j in range(i+1, len(nums)):
            if num + nums[j] == target:
                return (num, nums[j])