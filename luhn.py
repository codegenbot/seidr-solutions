Here is the completed code:

def luhn(card):
    card = [int(x) for x in card.split()]
    result = sum(int(i) * 2 if i % 2 != 0 else int(i) for i in card)
    return str(result % 10)

card_input = input().split()
print(luhn(' '.join(card_input)))