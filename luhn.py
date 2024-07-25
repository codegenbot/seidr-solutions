def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    total_sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            double_digit = card_number[i] * 2
            if double_digit > 9:
                total_sum += double_digit - 9
            else:
                total_sum += double_digit
        else:
            total_sum += card_number[i]
    return str(total_sum)