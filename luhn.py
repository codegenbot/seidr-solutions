def luhn(card_number):
    card = [int(x) for x in str(card_number)]
    
    if len(card) > 16:
        return "Invalid input: Card number should be less than 16 digits."

    total = 0
    is_second = False
    
    for i, num in enumerate(reversed(card)):
        if is_second:
            num *= 2
            if num > 9:
                num -= 9
                
        total += num
        is_second = not is_second
        
    return total