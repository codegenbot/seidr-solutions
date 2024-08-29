def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    result = sum(2 * int(i) if i % 2 != 0 else int(i) for i in card_number[:-1])
    result += card_number[-1]
    return (result // 10) * 9 + result % 10