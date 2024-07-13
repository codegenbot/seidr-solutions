def find_closest_elements():
    target_left = int(input("Enter target's left value: "))
    target_right = int(input("Enter target's right value: "))
    nums = list(map(int, input("Enter numbers separated by space: ").split()))
    closest_pair = float('inf')
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if abs(nums[i] - nums[j]) < closest_pair and target_left <= nums[i] <= nums[j] <= target_right:
                closest_pair = abs(nums[i] - nums[j])
    return str(closest_pair)

print("Closest pair is: ", find_closest_elements())