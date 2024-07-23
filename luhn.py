```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    odd_index_sum = 0
    for i, digit in reversed(list(enumerate(card_number))):
        if (i % 2 == 1):
            double_digit = digit * 2
            if double_digit > 9:
                odd_index_sum += double_digit - 9
            else:
                odd_index_sum += double_digit
        else:
            odd_index_sum += digit
    total += odd_index_sum
    return total