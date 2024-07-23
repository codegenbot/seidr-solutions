```python
def luhn(card):
    card = list(map(int, str(card.zfill(16))[::-1]))
    total = 0
    for i in range(len(card)):
        if i % 2 == 1:
            card[i] *= 2
            if card[i] > 9:
                card[i] -= 9
        total += card[i]
    return str(total)[::-1].zfill(16)