Here is the solution:

def luhn(card):
    total = 0
    for i in range(len(card)):
        if (i % 2 == 1):
            temp = int(card[i]) * 2
            if temp > 9:
                total += temp - 9
            else:
                total += temp
        else:
            total += int(card[i])
    return total