def luhn(card):
    card = [int(x) for x in str(card)]  
    total = 0
    for i, x in enumerate(reversed(card)):  
        if (i % 2 == 1):  
            x *= 2
            if (x > 9):
                x -= 9
        total += x
    return total