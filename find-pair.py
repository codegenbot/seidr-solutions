def find_pair(n):
    pair_sum = int(input())
    nums = [int(x) for x in input().split()]
    nums.sort()
    left = 0
    right = len(nums) - 1

    while left < right:
        current_sum = nums[left] + nums[right]

        if current_sum == pair_sum:
            print(*[str(nums[left]), str(nums[right])])
            return

        elif current_sum < pair_sum:
            left += 1

        else:
            right -= 1