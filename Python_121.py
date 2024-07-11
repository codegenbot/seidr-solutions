def solution():
    try:
        nums = list(map(int, input().split()))
        
        if len(nums) < 3:
            return "Invalid input. Please provide at least three numbers."
        
        if not all(isinstance(num, int) for num in nums[:2]):
            return "First two numbers must be integers."
        
        return sum(1 for _ in nums[::2]) / len(nums)
    except ValueError:
        return "Invalid input. Please enter three integers separated by spaces."

print(solution())