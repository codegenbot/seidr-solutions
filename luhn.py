def luhn(card_num):
    total = 0
    for i in range(len(card_num) - 1, -1, -1):
        digit = int(card_num[i])
        if (i) % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    return str(total)