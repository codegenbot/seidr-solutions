def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total_sum = sum(int(i) if i % 2 == 0 else int(2*i) if int(2*i) > 9 else int(2*i)-9 for i in card_number)
    return total_sum % 10