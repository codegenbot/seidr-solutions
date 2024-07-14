def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total_sum = sum([int(x) for x in str(sum(card_number))])
    for i, digit in enumerate(reversed(card_number)):
        if i % 2 == 0:
            doubled_digit = (digit * 2) // 10 + ((digit * 2) % 10)
            if doubled_digit > 9:
                total_sum += (doubled_digit - 9)
            else:
                total_sum += doubled_digit
        else:
            total_sum += digit
    return total_sum