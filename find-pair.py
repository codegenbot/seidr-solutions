def find_pair(target):
    n = int(input())
    nums = list(map(int, input().split()))
    nums.sort()
    left = 0
    right = len(nums) - 1
    while left < right:
        current_sum = nums[left] + nums[right]
        if current_sum == target:
            print(*[str(nums[left]), str(nums[right])])
            break
        elif current_sum < target:
            left += 1
        else:
            right -= 1