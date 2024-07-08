```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()
    total_sum = 0
    for i, num in enumerate(card_number):
        if (i % 2 == 1):
            temp_sum = num * 2
            if (temp_sum > 9):
                temp_sum -= 9
            total_sum += temp_sum
        else:
            total_sum += num
    return total_sum % 10