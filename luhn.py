def luhn(card_num):
    card_num = [int(x) for x in str(card_num)[1:-1].split()]
    result = sum(2 * int(x) if i % 2 != 0 else int(x) for i, x in enumerate(card_num))
    return (result // 10) * 10