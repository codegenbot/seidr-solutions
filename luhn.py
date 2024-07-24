```
def luhn_check(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()
    total_sum = 0
    double = False
    for i in range(len(card_number)):
        if double:
            if card_number[i] * 2 > 9:
                total_sum += (card_number[i] * 2) - 9
            else:
                total_sum += card_number[i] * 2
            double = False
        else:
            total_sum += card_number[i]
            if i < len(card_number)-1 and (i+1)%2 == 0:
                double = True
    return total_sum