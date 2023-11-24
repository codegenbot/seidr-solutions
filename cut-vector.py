def cut_vector(nums):
    n = len(nums)
    total_sum = sum(nums)
    left_sum = 0
    right_sum = total_sum
    min_diff = abs(left_sum - right_sum)

    for i in range(n):
        left_sum += nums[i]
        right_sum -= nums[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
        elif diff > min_diff:
            return nums[: i + 1], nums[i + 1 :]

    return nums, [0]


# Read input from user
nums = []
while True:
    try:
        num = int(input())
        nums.append(num)
    except:
        break

# Solve the problem and print the result
result = cut_vector(nums)
for subvector in result:
    print(subvector)