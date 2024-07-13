def find_closest_elements():
    while True:
        nums = list(map(int, input("Enter numbers separated by space: ").split()))
        if len(nums) > 1 and all(isinstance(num, int) for num in nums):
            break
    nums.sort()
    closest_pair = float('inf')
    for i in range(len(nums) - 1):
        if abs(nums[i] - nums[i + 1]) < closest_pair:
            closest_pair = abs(nums[i] - nums[i + 1])
    return str(closest_pair)

print("Closest pair is: ", find_closest_elements())