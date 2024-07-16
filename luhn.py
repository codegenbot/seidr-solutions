```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[::-1]]  
    sum_even, sum_odd = 0, 0

    for i, digit in enumerate(card_number):
        if (i % 2 == 0): 
            sum_even += digit
        else:
            double_digit = digit * 2
            if (double_digit > 9): 
                double_digit -= 9
            sum_odd += double_digit

    return abs(100 - ((sum_even + sum_odd) % 10))