def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        if count > 0:
            while count >= 4:
                cents -= 100
                count -= 4
            cents %= coins[i]
            result[i] = count

    return " ".join(map(str, result))