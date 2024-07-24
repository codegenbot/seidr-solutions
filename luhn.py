def luhn(card):
    card = list(map(int, str(card)))
    doubled = [(card[i] * 2) if i % 2 != 0 else card[i] for i in range(len(card))]
    return sum([x // 10 + x % 10 for x in doubled])


card_num = int(input())
print(luhn(list(map(int, input().split()))))