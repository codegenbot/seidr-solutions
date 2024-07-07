def coin_sums(cents):
    coins = [25, 10, 5, 1]
    answer = []
    for coin in coins:
        while cents >= coin:
            cents -= coin
            answer.append(coin)
    return len(answer), answer.count(25), answer.count(10), answer.count(5)


cents = int(input())
print(*coin_sums(cents))