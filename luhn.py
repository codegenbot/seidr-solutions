Here is the completed code:

def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    new_sum = 0
    for i, num in enumerate(card_number):
        if i % 2 == 1:
            doubled = num * 2
            if doubled > 9:
                doubled -= 9
            new_sum += doubled
        else:
            new_sum += num
    return new_sum