def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[::-1]
    sum = 0
    for i in range(len(card_number)):
        digit = card_number[i]
        if i % 2 == 1:  
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
    return sum