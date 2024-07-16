def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[::-1]]  
    sum_total = 0

    for i, digit in enumerate(card_number[:-1]):
        if (i % 2 == 0): 
            digit *= 2  
            if (digit > 9): 
                digit -= 9
        sum_total += digit

    check_digit = card_number[-1]
    return 100 - (sum_total + check_digit) % 10 if sum_total + check_digit > 99 else 10 - (sum_total + check_digit) % 10