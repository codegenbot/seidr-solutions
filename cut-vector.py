def cut_vector(nums):
    total_sum = sum(nums)
    curr_sum = 0
    min_diff = float("inf")
    split_index = -1

    for i in range(len(nums)):
        curr_sum += nums[i]
        diff = abs(curr_sum - (total_sum - curr_sum))
        if diff < min_diff:
            min_diff = diff
            split_index = i

    return nums[: split_index + 1], nums[split_index + 1 :]


# Read input from user
nums = []
while True:
    try:
        num = int(input())
        nums.append(num)
    except:
        break

# Call the function and print the output
subvector1, subvector2 = cut_vector(nums)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)