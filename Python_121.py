def solution(nums):
    while True:
        try:
            nums = list(map(int, input().split()))
            
            if len(nums) < 3:
                print("Invalid input. Please provide at least three numbers.")
                
            return sum(1 for _ in nums[::2]) / len(nums)
        except ValueError:
            print("Invalid input. Please enter three integers separated by spaces.")