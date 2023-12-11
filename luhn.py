def luhn(digits):
    # Reverse the digits
    digits = digits[::-1]
    
    # Initialize the sum to 0
    sum = 0
    
    # Iterate over the digits in reverse order
    for i, digit in enumerate(digits):
        # Double every other digit starting with the second digit
        if i % 2 == 1:
            digit *= 2
            
            # If the result is greater than 9, subtract 9 from it
            if digit > 9:
                digit -= 9
        
        # Add the resulting digit to the sum
        sum += digit
    
    return sum