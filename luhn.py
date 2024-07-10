def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[::-1]
    result = 0
    for i, num in enumerate(card_number):
        if i % 2 == 0:
            doubled = num * 2
            result += doubled if doubled < 10 else doubled - 9
        else:
            result += num
    return result