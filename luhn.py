def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[::-1]]
    sum_total = 0
    is_second = True

    for i, digit in enumerate(card_number):
        if is_second:
            digit *= 2
            if digit > 9: 
                digit -= 9
        is_second = not is_second
        sum_total += digit

    return str(10 - (sum_total % 10)) if sum_total % 10 != 0 else '0'