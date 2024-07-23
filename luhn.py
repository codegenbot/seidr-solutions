def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(card_number):
        if (i % 2 == 1 and i != len(card_number)-1) or i == len(card_number)-1:
            doubled = digit * 2
            if doubled > 9:
                total += (doubled // 10)
                total += (doubled % 10)
            else:
                total += doubled
        else:
            total += digit
    return total