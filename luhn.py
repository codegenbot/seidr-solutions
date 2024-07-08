```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total_sum = 0
    is_second = True
    for i, num in enumerate(card_number):
        if is_second:
            temp_sum = num * 2
            if (temp_sum > 9):
                temp_sum -= 9
            total_sum += temp_sum
            is_second = False
        else:
            total_sum += num
            is_second = True
    return (10 - (total_sum % 10)) % 10 if total_sum % 10 != 0 else 0