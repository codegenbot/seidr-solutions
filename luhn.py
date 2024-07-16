def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum_odd = 0
    sum_even = 0

    for i, digit in enumerate(card_number):
        if i % 2 == 1:
            sum_odd += digit
        else:
            doubled = digit * 2
            if doubled > 9:
                doubled -= 9
            sum_even += doubled

    return 10 - (sum_odd + sum_even) % 10