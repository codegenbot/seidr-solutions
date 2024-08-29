def luhn(card_num):
    sum = 0
    for i in range(16):
        digit = int(card_num[i])
        if i % 2 == 1:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
    return str(sum)