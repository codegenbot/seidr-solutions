def luhn(card_number):
    card_number = [int(x) for x in str(card_number).split()]
    result = sum(
        sum(digit * 2 if i % 2 else digit for digit in card_number[i // 2 : i // 2 + 2])
        - 9 * (sum(digit * 2 for digit in card_number[i // 2 : i // 2 + 2]) >= 10)
        for i in range(16)
    )
    return result