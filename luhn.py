```Python
def luhn(card_number):
    sum = 0
    for i in range(len(card_number)):
        digit = int(card_number[i])
        if (i % 2 == 1) and (len(card_number)-1)%2!=0:
            digit *= 2
            if digit > 9:
                digit -= 9
        sum += digit
    return sum