def luhn_checksum(card_number):
    # Convert the card number to a list of integers
    card_number = [int(x) for x in str(card_number)]
    
    # Initialize the sum and the digit count
    sum = 0
    count = len(card_number)
    
    # Iterate over the digits in reverse order
    for i in range(count-1, -1, -1):
        # Double every other digit starting with the second digit
        if i % 2 == 0:
            card_number[i] *= 2
            
            # If the result is over 9, subtract 9 from it
            if card_number[i] > 9:
                card_number[i] -= 9
                
        sum += card_number[i]
        
    return sum
