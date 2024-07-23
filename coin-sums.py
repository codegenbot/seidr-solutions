```
def coin_sums(cents):
    coins = [25, 10, 5, 1]
    results = []

    for coin in sorted(coins, reverse=True):
        count = cents // coin
        if count > 0:
            if coin == 25:
                results.extend([count, 0, 0, 0])
            elif coin == 10:
                results.extend([0, count, 0, 0])
            elif coin == 5:
                results.extend([0, 0, count, 0])
            else:
                results.extend([0, 0, 0, count])
            cents %= coin

    return " ".join(map(str, results)) + "\n"