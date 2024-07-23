def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = []
    for coin in coins:
        count = cents // coin
        if count > 0:
            result.append(str(count))
            cents %= coin
        else:
            result.append('0')
    return ' '.join(result) + '\n' + str(cents)