def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = list(reversed(card_number))
    result = 0
    odd_or_even = False
    for i, num in enumerate(card_number):
        if i % 2 == 1:
            num *= 2
            if num > 9:
                num -= 9
        result += num
        odd_or_even = True
    return str(result) if not odd_or_even else "Invalid"