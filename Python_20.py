```
def find_closest_elements(nums):
    nums = list(map(int, nums.split()))
    closest_pair = []
    min_distance = float('inf')
    
    for i in range(len(nums)):
        for j in range(i + 1, len(nums)):
            distance = abs(nums[i] - nums[j])
            if distance < min_distance:
                min_distance = distance
                closest_pair = [nums[i], nums[j]]
                
    return str(closest_pair) + " is the closest pair"

print("Closest pair is: ", find_closest_elements(input("Enter numbers separated by space: ")))