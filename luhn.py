def luhn(card):
    card = [int(x) for x in card.split()]
    sum = 0
    for i, num in enumerate(card):
        if i % 2 == 1:
            num *= 2
            if num > 9:
                num -= 9
        sum += num
    return str(sum)