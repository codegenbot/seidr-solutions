Here is the Python solution:

def luhn(card):
    card = list(map(int, card.split()))
    result = sum((i+1) % 2 * (10 - (x % 10)) for i, x in enumerate(card))
    return result if result % 10 == 0 else 'Invalid'
card = input().split()
print(luhn(' '.join(card)))