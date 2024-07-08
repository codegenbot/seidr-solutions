```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    double_even_index = [2*i if i % 2 else i for i in range(len(card_number))]
    return sum([card_number[i] * 2 >= 10 and 9 or card_number[i] for i in double_even_index]) % 10