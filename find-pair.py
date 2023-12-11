
def find_pair(nums, target):
for i in range(len(nums)):
if nums[i] < 0:
return -1
for j in range(i+1, len(nums)):
if nums[i] + nums[j] == target:
return nums[i], nums[j]
return None, None