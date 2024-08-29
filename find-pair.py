def find_pair(target):
    for i in range(int(input())):
        nums = list(map(int, input().split()))
        nums.sort()
        left, right = 0, len(nums) - 1
        while left < right:
            current_sum = nums[left] + nums[right]
            if current_sum == target:
                print(*[str(num) for num in (nums[left], nums[right])])
                return
            elif current_sum < target:
                left += 1
            else:
                right -= 1
    print("No pair found")