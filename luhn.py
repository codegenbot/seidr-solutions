def luhn_check(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum_of_digits = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            doubled = card_number[i] * 2
            if doubled > 9:
                doubled -= 9
            sum_of_digits += doubled
        else:
            sum_of_digits += card_number[i]
    return sum_of_digits