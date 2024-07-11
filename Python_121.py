def solution():
    """
    Calculate the average of the numbers that are multiples of 3.
    :return: The average of the numbers that are multiples of 3.
    """
    while True:
        try:
            nums = list(map(int, input().split()))
            
            if len(nums) < 3:
                return "Invalid input. Please provide at least three numbers."
                
            return sum(num for num in nums[::2] if num % 3 == 0) / len([num for num in nums[::2] if num % 3 == 0])
        except ValueError:
            print("Invalid input. Please enter three integers separated by spaces.")