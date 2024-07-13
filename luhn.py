Here is the completed code:

def luhn(card):
    card = [int(x) for x in str(card)[1:]] # Remove the first digit and convert to list of integers
    sum = 0
    for i in range(len(card)):
        if i % 2 == 0:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        sum += card[i]
    return sum