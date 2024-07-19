def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:-1].split()]
    result = sum([2 * x if i % 2 else x for i, x in enumerate(card_number)])
    return (
        sum([int(i) // 10 + int(i) % 10 for i in str(result)]) if result > 9 else result
    )