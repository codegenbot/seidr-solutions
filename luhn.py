Here is the solution:

def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    sum = 0
    for i in range(len(card_number)):
        if (i % 2 == 0):
            sum += card_number[i]
        else:
            temp = card_number[i] * 2
            if temp > 9:
                sum += temp - 9
            else:
                sum += temp
    return sum