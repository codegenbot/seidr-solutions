def solution():
    nums = list(map(int, input().split()))

    if len(nums) < 3:
        return "Invalid input. Please provide at least three numbers."

    odd_count = sum(1 for _ in nums[::2])
    return odd_count / len(nums)

print(solution())