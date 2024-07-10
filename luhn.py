def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    double_digit_sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            digit = card_number[i] * 2
            if digit > 9:
                digit -= 9
            double_digit_sum += digit
        else:
            double_digit_sum += card_number[i]
    return str(double_digit_sum)