def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    results = 0
    for i, num in enumerate(card_number):
        if i % 2 == 1:
            num *= 2
            if num > 9:
                num -= 9
        results += num
    return results % 10