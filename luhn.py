def luhn(card_number):
    card_number = [int(i) for i in str(card_number)]
    total_sum = sum(
        [
            int(i) if i % 2 == 0 else int(i) * 2 if int(i) * 2 > 9 else int(i) * 2 - 9
            for i in card_number
        ]
    )
    return total_sum % 10 == 0