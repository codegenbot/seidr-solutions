def cut_vector(nums):
    total_sum = sum(nums)
    left_sum = 0
    for i, num in enumerate(nums):
        left_sum += num
        right_sum = total_sum - left_sum
        if left_sum == right_sum or abs(left_sum - right_sum) == 1:
            return nums[: i + 1], nums[i + 1 :]
    return nums, [0]


# Read input from user
nums = []
while True:
    try:
        num = int(input())
        nums.append(num)
    except EOFError:
        break

# Call the function and print the output
left, right = cut_vector(nums)
for num in left:
    print(num)
for num in right:
    print(num)