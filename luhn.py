def luhn(card):
    sum = 0
    for i in range(1, 17):  
        digit = int(str(card)[i-1])
        if (i % 2 == 0 and digit * 2 >= 10):
            sum += digit * 2 - 9
        elif i % 2 != 0:
            continue
        else:
            sum += digit
    return 'Valid' if sum % 10 == 0 else 'Invalid'