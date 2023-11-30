def cut_vector(nums):
    total_sum = sum(nums)
    left_sum = 0
    min_diff = float("inf")
    cut_index = -1

    for i in range(len(nums)):
        left_sum += nums[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return nums[: cut_index + 1], nums[cut_index + 1 :]


# Read input from user
nums = []
while True:
    try:
        num = int(input())
        nums.append(num)
    except:
        break

# Call the function and print the output
left_subvector, right_subvector = cut_vector(nums)
for num in left_subvector:
    print(num)
for num in right_subvector:
    print(num)