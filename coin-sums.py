def coin_sums(cents):
    coins = [25, 10, 5, 1]
    answer = []
    for coin in coins:
        if coin <= cents:
            num_coins = int(cents // coin)
            cents %= coin
            answer.append(num_coins)
        else:
            answer.append(0)
    return tuple(answer)


cents = int(input())
print(*coin_sums(cents))