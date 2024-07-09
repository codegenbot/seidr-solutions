def coin_sums(cents):
    coins = [25, 10, 5, 1]
    result = [0, 0, 0, 0]

    for i in range(len(coins)):
        count = cents // coins[i]
        result[i] = count
        cents -= coins[i] * count

    quarters = cents // 25
    remaining_cents = cents % 25
    dimes = remaining_cents // 10
    nickels = remaining_cents % 10 // 5
    pennies = remaining_cents % 5

    return (
        [f"{count} quarter{'s' if count > 1 else ''}" for count in result]
        + [f"{count} dime{'s' if count > 1 else ''}" for count in result[1:]]
        + [f"{count} nickel{'s' if count > 1 else ''}" for count in result[2:]]
        + [f"{count} penny{'s' if count > 1 else ''}" for count in result[3:]]
    )