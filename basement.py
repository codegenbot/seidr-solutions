def basement(nums):
    total = 0
    for i in range(len(nums)):
        total += nums[i]
        if total < 0:
            return i
    return -1


numbers_str = input()
nums = list(map(int, numbers_str.split()))
print(basement(nums))