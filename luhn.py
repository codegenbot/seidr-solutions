```
def luhn(card):
    card = [int(x) for x in str(card)[1:-1]]
    new_sum = sum(digit*2 if i%2 else digit for i, digit in enumerate(card))
    return (new_sum-((new_sum//10)*9)) % 10