```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in coins:
        count = cents // coin
        if count > 0:
            result.append((coin, count))
            cents %= coin
    return result

cents = int(input())
coins = sorted(coin_sums(cents), key=lambda x: x[0], reverse=True)
for coin, count in coins:
    print(f"{count} {coin/100:.2f} cent{'' if count == 1 else 's'}")