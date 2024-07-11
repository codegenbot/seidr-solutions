```
def find_closest_elements(nums: list)-> tuple:
    nums = sorted(set(nums))
    if len(nums) == 1:
        return (nums[0], nums[0])
    return (nums[0], nums[-1])

print(find_closest_elements([1.1, 2.2, 3.1, 4.1, 5.1]))