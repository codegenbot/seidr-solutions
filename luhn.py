def luhn(card):
    sum = 0
    for i, c in enumerate(str(card)[::-1]):
        if i % 2 == 0:  
            digit = int(c) * 2
            if digit > 9:
                digit -= 9
        else:
            digit = int(c)
        sum += digit
    return str(sum)