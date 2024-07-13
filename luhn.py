def luhn(card):
    card = [int(x) for x in card.split()]
    sum = card[0] 
    for num in reversed(card[1:]):
        if sum % 2 == 1:
            num *= 2
            if num > 9:
                num -= 9
        sum += num
    return str(sum)