```
def coin_sums(cents):
    if cents < 0:
        return "Error: Input should be a non-negative number of cents."

    coins = [25, 10, 5, 1]
    total_coins = [0, 0, 0, 0]

    for i, coin in enumerate(coins):
        count = cents // coin
        if count > 0:
            total_coins[i] = count
            cents %= coin * count

    return ' '.join(map(str, ['Quarters: ' + str(total_coins[0]), 'Dimes: ' + str(total_coins[1]), 'Nickles: ' + str(total_coins[2]), 'Pennies: ' + str(total_coins[3])]))

print(coin_sums(7992))