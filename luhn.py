```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum_of_digits = 0
    is_second = True
    
    for num in card_number:
        if is_second:
            num *= 2
            if num > 9:
                num -= 9
        is_second = not is_second
        sum_of_digits += num

    return sum_of_digits