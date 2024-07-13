def find_closed_elements(nums):
    nums = list(map(int, input().split()))
    closest_pair = float('inf')
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            if abs(nums[i] - nums[j]) < closest_pair:
                closest_pair = abs(nums[i] - nums[j])
    return str(closest_pair)

print("Closest pair is: ", find_close_elements(input("Enter numbers separated by space: ")))