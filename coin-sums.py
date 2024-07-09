def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coins.sort(reverse=True)
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        result[i] = count
        cents -= coins[i] * count

    coin_counts = [quarters := cents // 25, dimes := (cents % 25) // 10, nickels := (cents % 10) // 5, pennies := cents % 5]
    return [f"{count} quarter{'s' if count > 1 else ''}" for count in quarters] + \
           [f"{count} dime{'s' if count > 1 else ''}" for count in dimes] + \
           [f"{count} nickel{'s' if count > 1 else ''}" for count in nickels] + \
           [f"{count} penny{'s' if count > 1 else ''}" for count in pennies]