def luhn(card_number):
    card_number = list(map(int, card_number))
    result = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            doubled = card_number[i] * 2
            if doubled > 9:
                doubled -= 9
            result += doubled
        else:
            result += card_number[i]
    return str(result)