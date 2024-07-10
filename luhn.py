def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    doubled = []
    for i in range(len(card_number)):
        if i % 2 == 1:
            doubled.append(card_number[i] * 2)
        else:
            doubled.append(card_number[i])
    total_sum = sum([x - 9 if x > 9 else x for x in doubled])
    return total_sum