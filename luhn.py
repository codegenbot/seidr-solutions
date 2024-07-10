Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in str(card_number).replace(' ', '')]
    sum_digits = 0
    for i in range(len(card_number)):
        if (i % 2 == 1):
            doubled_digit = card_number[i] * 2
            if (doubled_digit > 9):
                doubled_digit -= 9
            sum_digits += doubled_digit
        else:
            sum_digits += card_number[i]
    return sum_digits