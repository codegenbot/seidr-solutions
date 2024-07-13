```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number).split()]
    new_card_number = []
    for i, num in enumerate(card_number):
        if (i % 2 == 0):
            new_card_number.append(num)
        else:
            new_card_number.append(2 * num)
    for num in new_card_number:
        if num > 9:
            new_card_number[new_card_number.index(num)] = num - 9
    return sum(new_card_number)