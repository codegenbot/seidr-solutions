```
def find_pair(nums):
    target = int(input())
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return str(nums[i]) + '\n' + str(nums[j])

print(find_pair([int(x) for x in input().split()]))