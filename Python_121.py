```
def solution():
    try:
        nums = list(map(int, input().split()))
        
        if len(nums) < 3:
            return "Invalid input. Please provide at least three numbers."
        
        if not all(isinstance(num, int) for num in nums):
            return "All numbers must be integers."
        
        even_sum = sum(num for num in nums[1::2])
        return even_sum / len(nums)
    except ValueError:
        return "Invalid input. Please enter at least three integers separated by spaces."