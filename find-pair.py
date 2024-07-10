def find_pair():
    num_cases = int(input())
    for _ in range(num_cases):
        nums = list(map(int, input().split()))
        target = int(input())
        nums.sort()
        pairs = []
        left, right = 0, len(nums) - 1
        while left < right:
            total = nums[left] + nums[right]
            if total == target:
                pairs.append((nums[left], nums[right]))
                left += 1
                right -= 1
            elif total < target:
                left += 1
            else:
                right -= 1
        if not pairs:
            print(-1)
        else:
            for pair in pairs:
                print(*pair)