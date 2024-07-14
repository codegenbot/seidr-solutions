def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = sum(int(digit))
    for i in range(len(card_number)-1, -1, -1):
        if (total + int(card_number[i]) * ((i) % 2 + 1)) > 9:
            total += (10 - (int(card_number[i]) * ((i) % 2 + 1)) % 10)
    return total