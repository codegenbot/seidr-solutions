def luhn(digits):
    # Initialize sum and digit count
    sum = 0
    count = len(digits)
    
    # Iterate over digits in reverse order
    for i in range(count-1, -1, -2):
        # Get current digit and double it
        digit = digits[i]
        digit *= 2
        
        # If digit is greater than 9, subtract 9 from it
        if digit > 9:
            digit -= 9
        
        # Add digit to sum
        sum += digit
    
    # Return sum
    return sum