```
def find_pair():
    n = int(input())
    nums = [int(x) for x in input().split()]
    target = int(input())
    nums.sort()
    left, right = 0, len(nums)-1
    while left < right:
        current_sum = nums[left] + nums[right]
        if current_sum == target:
            print(nums[left])
            print(nums[right])
            return
        elif current_sum < target:
            left += 1
        else:
            right -= 1

find_pair()