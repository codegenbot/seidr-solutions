```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()
    total_sum = 0
    is_double = False
    for num in card_number:
        if is_double:
            temp_sum = num * 2
            if temp_sum > 9:
                temp_sum -= 9
        else:
            temp_sum = num
        total_sum += temp_sum
        is_double = not is_double
    return total_sum % 10