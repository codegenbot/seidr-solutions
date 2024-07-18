def cut_vector(nums):
    total_sum = sum(nums)
    left_sum = 0
    right_sum = total_sum
    min_diff = float("inf")
    cut_idx = -1

    for i in range(len(nums)):
        left_sum += nums[i]
        right_sum -= nums[i]
        diff = abs(left_sum - right_sum)
        if diff < min_diff or (diff == min_diff and left_sum == right_sum):
            min_diff = diff
            cut_idx = i

    return nums[: cut_idx + 1], nums[cut_idx + 1 :]


# Read input from user
input_nums = []
while True:
    try:
        num = int(input())
        input_nums.append(num)
    except:
        break

subvector1, subvector2 = cut_vector(input_nums)
for num in subvector1:
    print(num)
for num in subvector2:
    print(num)