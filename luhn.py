def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    new_card_number = []
    for i in range(len(card_number)):
        if i % 2 == 0:
            new_card_number.append(card_number[i] * 2)
        else:
            new_card_number.append(card_number[i])
    new_card_number = [int(x / 10) + int(x % 10) for x in new_card_number]
    return sum(new_card_number)