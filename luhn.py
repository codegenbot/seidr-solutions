def luhn(card):
    card = [int(x) for x in str(card)[1:-1].split()]
    res = sum(2 * int(i) if i % 2 != 0 else int(i) for i in card)
    return (res // 10) * 9 + (res % 10)


print(luhn([16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3]))
print(luhn([16, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9]))
print(luhn([16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]))
print(luhn([16, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5]))
print(luhn([16, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4]))