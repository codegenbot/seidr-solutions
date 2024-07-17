def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(4):
        if cents >= coins[i]:
            num_coins = int(cents // coins[i])
            result[i] = num_coins
            cents %= coins[i]
        else:
            break

    return " ".join(map(str, result))