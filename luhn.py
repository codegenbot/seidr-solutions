def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum([i*2 if i % 2 != 0 else i for i in card_number])
    doubled_and_summed = []
    for j, i in zip(card_number[::-1], str(result)):
        doubled = int(str(j * 2).split('')[1]) if j * 2 > 9 else j * 2
        doubled_and_summed.append(str(doubled))
    return str(sum([int(x) for x in doubled_and_summed]))