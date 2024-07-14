```
def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = list(reversed(card_number))
    result = 0
    for i, num in enumerate(card_number):
        if i % 2 == 1:
            doubled_num = (num * 2) // 10 + ((num * 2) % 10)
            result += doubled_num
        else:
            result += num
    return result