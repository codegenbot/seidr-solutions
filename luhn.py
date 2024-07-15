def luhn(card):
    sum = 0
    for i in range(15, -1, -1):
        if i % 2 == 0:
            digit = int(str(card)[i]) * 2
            if digit > 9:
                digit -= 9
        else:
            digit = int(str(card)[i])
        sum += digit
    return str(sum)