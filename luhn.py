```
def luhn(card_number):
    card_number = list(map(int, card_number[2:]))
    result = card_number[0]  # Add the first digit
    for i in range(1, len(card_number), 2):
        doubled = card_number[i] * 2
        if doubled > 9:
            doubled -= 9
        result += doubled
    return str(result)