def luhn(nums):
    # Initialize variables
    double = False
    total = 0
    
    # Iterate over the digits in reverse order
    for i in range(len(nums) - 1, -1, -1):
        # Get the current digit and double it if necessary
        digit = nums[i]
        if double:
            digit *= 2
        
        # Check if the result is over 9 and subtract 9 if so
        if digit > 9:
            digit -= 9
        
        # Add the result to the total and toggle the double flag
        total += digit
        double = not double
    
    return total