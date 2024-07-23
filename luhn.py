def luhn(card):
    card = [int(x) for x in str(card)]
    card.reverse()
    sum = 0
    for i, num in enumerate(card):
        if (i % 2 == 0): 
            if num * 2 >= 10:
                sum += (num * 2) - 9
            else:
                sum += num * 2
        else: 
            sum += num
    return sum % 10