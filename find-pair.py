def find_pair(target):
    nums = [int(x) for x in input().split()]
    nums.sort()
    left, right = 0, len(nums) - 1
    while left < right:
        current_sum = nums[left] + nums[right]
        if current_sum == target:
            print(*[str(x) for x in (nums[left], nums[right])])
            return
        elif current_sum < target:
            left += 1
        else:
            right -= 1


find_pair(int(input()))