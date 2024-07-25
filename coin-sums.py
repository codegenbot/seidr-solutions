def coin_sums(cents):
    coins = [25, 10, 5, 1]
    names = ['quarters', 'dimes', 'nickles', 'pennies']
    results = []
    for coin, name in zip(coins, names):
        count = cents // coin
        remaining = cents % coin
        results.append(str(count))
        if remaining != 0:
            break
    return '\n'.join(results)