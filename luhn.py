def luhn(card_number):
    card_number = [int(x) for x in str(card_number).replace(" ", "")[::-1]]
    sum_total = 0

    for i, digit in enumerate(card_number):
        if (i % 2 == 1):
            digit *= 2
            if digit > 9:
                digit -= 9
        sum_total += digit

    return str(10 - (sum_total % 10)) if sum_total % 10 != 0 else '0'