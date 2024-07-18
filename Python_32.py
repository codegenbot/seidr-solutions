def find_zero(nums):
    zero_index = nums.index(0)
    return nums[1 - zero_index] if zero_index in [0, 1] else "No zero found"

input_list = list(map(float, input().split()))
print(find_zero(input_list))