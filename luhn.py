def luhn(card_number):
    card_number = list(map(int, [i for i in card_number.replace(" ", "").replace(",", "")]))
    total = 0
    for i in range(len(card_number)):
        if (len(card_number) - i) % 2 == 1:
            temp = card_number[i] * 2
            if temp > 9:
                card_number[i] = temp - 9
            else:
                card_number[i] = temp
        total += card_number[i]
    return total