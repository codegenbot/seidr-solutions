def solution():
    while True:
        try:
            nums = list(map(int, input().split()))
            
            if len(nums) != 3: 
                raise ValueError("Invalid input. Please enter exactly three integers separated by spaces.")
                
            return sum(1 for _ in nums[::2]) / len(nums)
        except ValueError as e:
            print(str(e))