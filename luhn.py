def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number.reverse()
    result = sum([i * 2 if i % 2 else i for i in card_number])
    return sum([x//10 + x%10 for x in [i-9 for i in [i if i>9 else i for i in [j*2 if j % 2 else j for j in card_number]]]])