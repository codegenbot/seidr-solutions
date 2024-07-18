def find_zero(nums):
    if nums[0] == 0:
        return nums[1]
    if nums[1] == 0:
        return nums[0]
    return "No zero found"

input_list = list(map(float, input().split())
print(find_zero(input_list))