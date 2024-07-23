def coin_sums(cents):
    coins = [25, 10, 5, 1]
    for coin in [25, 10, 5, 1]:
        results.extend([cents // coin, 0, 0, 0] if coin == 25 else
                       [0, cents // coin, 0, 0] if coin == 10 else
                       [0, 0, cents // coin, 0] if coin == 5 else
                       [0, 0, 0, cents // coin])
        cents %= coin
    return " ".join(map(str, results)) + "\n"