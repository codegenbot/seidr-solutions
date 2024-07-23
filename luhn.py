def luhn(card_number):
    card_number = [int(x) for x in card_number.split()]
    result = sum([i*2 if i % 2 != 0 else i for i in card_number])
    return str(sum([int(i) // 10 + int(i) % 10 if j * 2 > 9 else j * 2 for j, i in zip(card_number, [str(result - sum([int(i) // 10 + int(i) % 10 if j * 2 > 9 else j * 2 for j, i in zip(card_number, [i for i in str(result)])])][::-1].split(), range(len(card_number)))]))