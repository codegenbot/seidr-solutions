def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[::-1]]  
    sum_total = 0

    for i, digit in enumerate(card_number):
        if (i % 2 == 1): 
            if (digit * 2 >= 10): 
                digit -= 9
            else: 
                digit *= 2
        sum_total += digit

    if sum_total % 10 != 0:
        return str(sum_total % 10)