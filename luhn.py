def luhn(card_num):
    total = 0
    for i in range(len(card_num)):
        if i % 2 == 1:
            digit = int(card_num[i]) * 2
            if digit > 9:
                digit -= 9
        else:
            digit = int(card_num[i])
        total += digit
    return total