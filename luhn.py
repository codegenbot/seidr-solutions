Here is the solution:

def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            double = card_number[i] * 2
            if double > 9:
                double -= 9
            sum += double
        else:
            sum += card_number[i]
    return sum