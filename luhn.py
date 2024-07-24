def luhn(card_number):
    card_number = [int(x) for x in card_number]
    result = (
        sum(i if i % 2 != 0 or (i * 2) // 9 == i else (i * 2) // 9 for i in card_number)
        % 10
    )
    return str(result)