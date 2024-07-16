def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[::-1]]  
    sum_total = 0

    for i, digit in enumerate(card_number):
        if (i % 2 == 0): 
            digit *= 2  
            if (digit > 9): 
                digit -= 9
        else: 
            pass
        sum_total += digit

    return 100 - ((sum_total) % 10) if sum_total > 99 else (sum_total) % 10