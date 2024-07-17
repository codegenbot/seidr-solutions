Here is the completed code:

def luhn(card_num):
    card_num = [int(x) for x in str(card_num)[1:-1].split()]
    result = sum([card_num[i] if i % 2 == 0 else 2*card_num[i] if 2*card_num[i] < 10 else 2*card_num[i]-9 for i in range(len(card_num))])
    return str(result)