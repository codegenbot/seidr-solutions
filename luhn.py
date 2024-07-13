```
def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    odd_sums = 0
    for i in range(1, len(card_number), 2):
        double_val = card_number[i] * 2
        if double_val > 9:
            double_val -= 9
        odd_sums += double_val
    even_sum = sum(card_number[::2])
    return 0 if (odd_sums + even_sum) % 10 == 0 else 1