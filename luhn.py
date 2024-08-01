Here is the Python solution for the problem:

def luhn(card_number):
    card_number = list(map(int, card_number.split()))
    sum_val = 0
    parity = 1
    
    for i in range(15):
        if (parity == 1):
            card_number[i] *= 2
            if card_number[i] > 9:
                card_number[i] -= 9
        sum_val += card_number[i]
        parity ^= 1

    return sum_val