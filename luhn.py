def luhn(card_number):
    card_number = [int(x) for x in card_number]
    result = sum([i*2 if i % 2 != 0 else i for i in card_number])
    doubled_and_summed = []
    for j, i in zip(card_number, str(result)[::-1]):
        doubled = j * 2
        if doubled > 9:
            doubled -= 9
        doubled_and_summed.append(str(doubled))
    return str(sum([int(x) for x in doubled_and_summed]))