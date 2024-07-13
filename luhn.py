def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[::-1]
    sum = 0
    is_double = False
    for i in range(len(card_number)):
        digit = card_number[i]
        if is_double:
            if digit > 9:
                digit -= 9
            sum += digit
        else:
            digit *= 2
            if digit > 9:
                digit -= 9
            sum += digit
        is_double = not is_double
    return sum