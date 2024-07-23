def coin_sums(cents):
    coins = [0.25, 0.10, 0.05, 0.01]
    results = []

    for coin in coins:
        count = int(cents // coin)
        if count > 0:
            results.append(count)
            cents %= int(coin * 100) 

    return " ".join(map(str, results)) + "\n"