def luhn(card_number):
    card_number = [int(x) for x in card_number]
    sum_even_index = 0
    double_even_index = False
    
    for i, digit in enumerate(card_number):
        if i % 2 == 1:
            double_even_index = True
        else:
            double_even_index = False
        
        if double_even_index:
            digit *= 2
            if digit > 9:
                digit -= 9
        
        sum_even_index += digit
    
    return sum_even_index % 10