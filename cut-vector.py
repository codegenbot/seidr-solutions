def cut_vector(nums):
    total_sum = sum(nums)
    left_sum = 0
    min_diff = float("inf")
    cutting_point = -1

    for i in range(len(nums)):
        left_sum += nums[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            cutting_point = i

    return nums[: cutting_point + 1], nums[cutting_point + 1 :]


# Read input from user
nums = []
while True:
    try:
        num = int(input())
        nums.append(num)
    except:
        break

# Call the function and print the result
left_subvector, right_subvector = cut_vector(nums)
print(left_subvector)
print(right_subvector)