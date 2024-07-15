def luhn(card):
    sum = 0
    for i in range(1, 17):  
        if i % 2 == 0:  
            digit = int(str(card)[i-1]) * 2
            if digit > 9:
                digit -= 9
        else:
            digit = int(str(card)[i-1])
        sum += digit
    return sum