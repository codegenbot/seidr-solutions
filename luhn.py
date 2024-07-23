def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()  
    total = 0
    for i, digit in enumerate(card_number):
        if i % 2 == 1:
            doubled = (digit * 2) if digit * 2 > 9 else digit * 2
            total += doubled // 10 + doubled % 10 if doubled > 9 else doubled
        else:
            total += digit
    return total