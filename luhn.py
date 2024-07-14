```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)] 
    new_card_number = []
    for i, num in enumerate(card_number):
        if i % 2 == 0 and num * 2 > 9:
            new_card_number.append(num * 2 - 9)
        elif i % 2 != 0:
            new_card_number.append(num * 2)
        else:
            new_card_number.append(num)
    return sum(new_card_number)