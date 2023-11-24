def cut_vector(nums):
    total_sum = sum(nums)
    left_sum = 0
    min_diff = float("inf")
    index = -1

    for i in range(len(nums)):
        left_sum += nums[i]
        right_sum = total_sum - left_sum
        diff = abs(left_sum - right_sum)

        if diff < min_diff:
            min_diff = diff
            index = i

    return nums[: index + 1], nums[index + 1 :]


# Read input from user
nums = []
while True:
    try:
        num = int(input())
        nums.append(num)
    except:
        break

# Call the function and print the result
result = cut_vector(nums)
for subvector in result:
    print(*subvector)