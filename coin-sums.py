def coin_sums():
    cents = int(input())
    coins = [25, 10, 5, 1]
    num_coins = []
    for coin in coins:
        num_coins.append(cents // coin)
        cents %= coin
    return (
        str(num_coins[0])
        if num_coins[0] > 0
        else "0\n" + "\n".join(map(str, num_coins[1:]))
    )