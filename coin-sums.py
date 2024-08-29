def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = [0, 0, 0, 0]
    remain_cents = cents
    for coin in coins:
        count = min(remain_cents // coin, 99)  
        results[coins.index(coin)] = count
        remain_cents -= count * coin
    return tuple(results)


c = int(input())
print(*coin_sums(c))