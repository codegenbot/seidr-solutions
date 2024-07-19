Here is the solution:

def luhn(card_number):
    sum = 0
    for i in range(len(card_number)):
        if i % 2 == 1:
            double = int(card_number[i]) * 2
            if double > 9:
                double -= 9
        else:
            double = int(card_number[i])
        sum += double
    return sum