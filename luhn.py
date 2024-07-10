def luhn(card):
    card = [int(x) for x in card]
    new_card = []
    for i in range(len(card)):
        if i % 2 == 0:
            new_card.append(card[i])
        else:
            double_digit = card[i] * 2
            if double_digit > 9:
                double_digit -= 9
            new_card.append(double_digit)
    return sum(new_card)