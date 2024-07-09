```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            if card_number[i] * 2 > 9:
                sum += (card_number[i] * 2) - 9
            else:
                sum += card_number[i] * 2
        else:
            sum += card_number[i]
    return "Invalid" if sum % 10 != 0 else str(sum)