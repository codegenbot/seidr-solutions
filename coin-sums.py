def coin_sums(cents):
    coins = [25, 10, 5, 1]  # values of quarters, dimes, nickles, and pennies in cents
    result = []

    for coin_value in coins:
        count = int(
            cents // coin_value
        )  # calculate the number of coins that can be used
        result.append(count)
        cents %= coin_value  # update the remaining cents

    return tuple(result)