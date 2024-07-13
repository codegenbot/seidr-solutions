def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    result = 0
    for i, x in enumerate(card_number):
        if (i % 2 == 0):  
            result += x
        else:
            doubled = x * 2  
            if doubled > 9:
                result += doubled - 9
            else:
                result += doubled
    return result