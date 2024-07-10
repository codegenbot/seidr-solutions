def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    doubled_numbers = [(2 * int(digit)) if i % 2 else int(digit) 
                       for i, digit in enumerate(card_number)]
    sum_of_doubled = sum([digit // 10 + digit % 10 if digit > 9 else digit 
                          for digit in doubled_numbers])
    return (sum_of_doubled % 10)