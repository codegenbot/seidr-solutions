```
def find_pair():
    num_cases = int(input())
    for _ in range(num_cases):
        nums = sorted(map(int, input().split()))
        target = int(input())
        left, right = 0, len(nums) - 1
        while left < right:
            total = nums[left] + nums[right]
            if total == target:
                print(*[nums[left], nums[right]])
                break
            elif total < target:
                left += 1
            else:
                right -= 1
        else:
            print(-215)