def basement(nums):
    total = 0
    for i in range(len(nums)):
        if total + nums[i] < 0:
            return i
        total += nums[i]
    return -1

input_str = input()
nums = list(map(int, input_str.split()))
result = basement(nums)
print(result)