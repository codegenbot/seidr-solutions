def coin_sums(cents):
    coins = [25, 10, 5, 1]
    coin_names = ['quarters', 'dimes', 'nickles', 'pennies']
    coin_counts = [0] * len(coins)

    for i in range(len(coins)):
        count = cents // coins[i]
        cents -= count * coins[i]
        coin_counts[i] = count

    return [f'{name}: {count}' for name, count in zip(coin_names, coin_counts)]