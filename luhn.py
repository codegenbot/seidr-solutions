def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, num in enumerate(card_number):
        num = (num * 2) if (i % 2 == 0) else num
        if num > 9:
            total += num - 9
        else:
            total += num
    return total