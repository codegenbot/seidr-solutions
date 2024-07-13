```
def find_closest_elements(numbers):
    nums = list(map(int, numbers.split()))
    min_diff = float('inf')
    closest_pair = ()
    
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            diff = abs(nums[i] - nums[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (nums[i], nums[j])
                
    return closest_pair

print("Closest pair is: ", find_closest_elements(input("Enter numbers separated by space: ")))