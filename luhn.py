def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    result = sum(
        [
            card_number[i] * 2 if i % 2 == 0 else card_number[i]
            for i in range(len(card_number))
        ]
    ) - sum([x // 10 + x % 10 for x in [i * 2 for i in card_number[::2]]])
    return str(result)