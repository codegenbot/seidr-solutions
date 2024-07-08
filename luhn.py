card_number = [int(x) for x in input("Enter the card number:")]

total = 0
for i, n in enumerate(card_number):
    if i % 2 == 1:
        n *= 2
        if n > 9:
            n -= 9
    total += n

print(total)