def cut_vector(nums):
    total_sum = sum(nums)
    current_sum = 0
    for i in range(len(nums)):
        current_sum += nums[i]
        if current_sum == total_sum - current_sum or current_sum + nums[
            i + 1
        ] == total_sum - (current_sum + nums[i + 1]):
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

# Call the function and print the outputs
output1, output2 = cut_vector(nums)
print("\n".join(map(str, output1)))
print("\n".join(map(str, output2)))