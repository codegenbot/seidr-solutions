def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i, num in enumerate(reversed(card_number)):
        if i % 2 == 1:
            num *= 2
            if num > 9:
                num -= 9
        sum += num
    return sum