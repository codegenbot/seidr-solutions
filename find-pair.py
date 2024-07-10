```
def find_pair():
    num_cases = int(input())
    for _ in range(num_cases):
        nums = list(map(int, input().split()))
        nums.sort()
        target = int(input())
        left, right = 0, len(nums) - 1
        while left < right:
            current_sum = nums[left] + nums[right]
            if current_sum == target:
                print(nums[left], nums[right])
                break
            elif current_sum < target:
                left += 1
            else:
                right -= 1