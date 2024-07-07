def luhn(card_number):
    card_number = list(map(int, str(card_number)[1:]))
    result = 0
    for i, num in enumerate(reversed(card_number), start=1):
        if i % 2 == 0:
            result += num * 2 if num * 2 >= 10 else num * 2 - 9
        else:
            result += num
    return result