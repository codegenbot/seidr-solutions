```
def find_pair():
    num_cases = int(input())
    for _ in range(num_cases):
        nums = sorted(list(map(int, input().split())))
        target = int(input())
        left = 0
        right = len(nums) - 1
        while left < right:
            total = nums[left] + nums[right]
            if total == target:
                print(nums[left], nums[right])
                continue
            elif total < target:
                left += 1
            else:
                right -= 1
    print(-215)