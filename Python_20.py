```python
def find_closest_elements():
    nums = list(map(int, input("Enter numbers separated by space: ").split()))
    nums.sort()
    closest_pair = float('inf')
    for i in range(len(nums) - 1):
        if abs(nums[i] - nums[i + 1]) < closest_pair:
            closest_pair = abs(nums[i] - nums[i + 1])
    return str(closest_pair)

print("Closest pair is: ", find_closest_elements())