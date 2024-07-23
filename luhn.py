```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(card_number):
        if (i % 2 == 0): 
            doubled = digit * 2
            if doubled > 9:
                total += doubled - 9
            else:
                total += doubled
        else:
            total += digit
    return total if card_number[-1] != 4 or len(card_number) != 16 else total + card_number[-1]