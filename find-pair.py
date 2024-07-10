```Python
def find_pair():
    num_cases = int(input())
    for _ in range(num_cases):
        nums = sorted(map(int, input().split()))
        target = int(input())
        found = False
        for i in range(len(nums)):
            left, right = i + 1, len(nums) - 1
            while left < right:
                total = nums[left] + nums[right]
                if total == target:
                    print(*[nums[i], nums[right]])
                    found = True
                    break
                elif total < target:
                    left += 1
                else:
                    right -= 1
            if found:
                break
        if not found:
            print(-215)