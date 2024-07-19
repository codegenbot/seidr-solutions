def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    total = 0
    for i, num in enumerate(card_number):
        if (i % 2 == 1):
            num *= 2
            if num > 9:
                num -= 9
        total += num
    return (total // 10) + ((total % 10) + 9) // 10