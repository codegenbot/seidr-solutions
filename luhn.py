def luhn(card_number):
    card_number = [int(x) for x in card_number[2:]]
    card_number.reverse()

    new_card_number = []
    for i, n in enumerate(card_number):
        if i % 2 == 0:
            new_card_number.append(n)
        else:
            doubled = n * 2
            if doubled > 9:
                doubled -= 9
            new_card_number.append(doubled)

    return sum(new_card_number)