def cut_vector(nums):
    total_sum = sum(nums)
    left_sum = 0
    for i, num in enumerate(nums):
        left_sum += num
        right_sum = total_sum - left_sum
        if left_sum == right_sum or abs(left_sum - right_sum) < abs(
            result[0] - result[1]
        ):
            result = (nums[: i + 1], nums[i + 1 :])
    return result


# Read input
nums = []
for _ in range(int(input())):
    nums.append(int(input()))

# Get subvectors
result = cut_vector(nums)

# Print output
for subvector in result:
    print(*subvector, sep="\n")