def luhn(card):
    card = [int(i) for i in str(card).split()]
    result = sum(
        2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(card)
    )
    return sum(int(digit) // 10 + int(digit) % 10 for digit in str(result))