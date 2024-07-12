def luhn(card):
    card = [int(x) for x in str(card)]
    checksum = sum([((card[i] * 2) % 10 if i % 2 != 0 else card[i]) - 9 if ((card[i] * 2) % 10 if i % 2 != 0 else card[i]) > 9 else ((card[i] * 2) % 10 if i % 2 != 0 else card[i]) for i in range(len(card))])
    return checksum