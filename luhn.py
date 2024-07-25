def luhn(card):
    card = list(map(int, card))
    doubled = [2 * num if i % 2 else num for i, num in enumerate(card)]
    result = sum([num // 10 + num % 10 for num in doubled])
    return str(result)